/*
 * Headtail.h
 *
 *  Created on: Jan 22, 2012
 *      Author: option0417
 */

#ifndef HEADTAIL_H_
#define HEADTAIL_H_

#include <iostream>

namespace op {

class Headtail {
public:
	Headtail();
	virtual ~Headtail();

	int getHeadtail();

private:
	void init();

	int vals[10];
	int total[10];
};

} /* namespace op */
#endif /* HEADTAIL_H_ */
