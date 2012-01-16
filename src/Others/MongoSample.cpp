/*
 * MongoSample.cpp
 *
 *  Created on: Jan 16, 2012
 *      Author: option0417
 */

#include "MongoSample.h"

MongoSample::MongoSample() {
	// TODO Auto-generated constructor stub

}

MongoSample::~MongoSample() {
	// TODO Auto-generated destructor stub
}

void MongoSample::run() {
    try {
    	DBClientConnection c;
        c.connect("localhost"); //"192.168.58.1");
        std::cout << "connected ok" << std::endl;
        BSONObj p = BSON( "name" << "Joe" << "age" << 33 );
        c.insert("tutorial.persons", p);
        p = BSON( "name" << "Jane" << "age" << 40 );
        c.insert("tutorial.persons", p);
        p = BSON( "name" << "Abe" << "age" << 33 );
        c.insert("tutorial.persons", p);
        p = BSON( "name" << "Samantha" << "age" << 21 << "city" << "Los Angeles" << "state" << "CA" );
        c.insert("tutorial.persons", p);

        c.ensureIndex("tutorial.persons", fromjson("{age:1}"));

        cout << "count:" << c.count("tutorial.persons") << endl;

        auto_ptr<DBClientCursor> cursor = c.query("tutorial.persons", BSONObj());
        while( cursor->more() ) {
            cout << cursor->next().toString() << endl;
        }

        cout << "\nprintifage:\n";
        printIfAge(c, 33);
    } catch( DBException &e ) {
    	std::cout << "caught " << e.what() << std::endl;
    }
}


void MongoSample::printIfAge(DBClientConnection& c, int age) {
    auto_ptr<DBClientCursor> cursor = c.query("tutorial.persons", QUERY( "age" << age ).sort("name") );
    while( cursor->more() ) {
        BSONObj p = cursor->next();
        cout << p.getStringField("name") << endl;
    }
}

