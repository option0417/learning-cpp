/*
 * Plateau.h
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#ifndef PLATEAU_H_
#define PLATEAU_H_

namespace op {

class Plateau {
public:
	Plateau();
	virtual ~Plateau();

	int getPlateau();

private:
	void init();
	int vals[10];
};

} /* namespace op */
#endif /* PLATEAU_H_ */
