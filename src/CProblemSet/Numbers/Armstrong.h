/*
 * Armstrong.h
 *
 *  Created on: Jan 22, 2012
 *      Author: option0417
 */

#ifndef ARMSTRONG_H_
#define ARMSTRONG_H_

#include <cmath>

namespace op {

class Armstrong {
public:
	Armstrong();
	virtual ~Armstrong();

	int* getArmstrong();
	int size();

private:
	int a;
	int b;
	int c;
	int *vals;
	int cnt;
};

} /* namespace op */
#endif /* ARMSTRONG_H_ */
