/*
 * EQCount.h
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#ifndef EQCOUNT_H_
#define EQCOUNT_H_

namespace op {

class EQCount {
public:
	EQCount();
	virtual ~EQCount();

	int getEQCount();

private:
	void init();

	int f[5];
	int g[5];
};

} /* namespace op */
#endif /* EQCOUNT_H_ */
