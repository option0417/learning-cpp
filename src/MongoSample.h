/*
 * MongoSample.h
 *
 *  Created on: Jan 16, 2012
 *      Author: option0417
 */

#ifndef MONGOSAMPLE_H_
#define MONGOSAMPLE_H_

#include <iostream>
#include "mongo/client/dbclient.h"

using namespace mongo;

class MongoSample {
public:
	MongoSample();
	virtual ~MongoSample();

	void run();

private:
	void printIfAge(DBClientConnection& , int );
};

#endif /* MONGOSAMPLE_H_ */
