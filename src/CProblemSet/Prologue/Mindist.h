/*
 * Mindist.h
 *
 *  Created on: Jan 22, 2012
 *      Author: option0417
 */

#ifndef MINDIST_H_
#define MINDIST_H_

#include <limits>

namespace op {

class Mindist {
public:
	Mindist();
	virtual ~Mindist();

	int getMindist();

private:
	void init();
	int getModulus(int);

	int f[5];
	int g[5];
};

} /* namespace op */
#endif /* MINDIST_H_ */
