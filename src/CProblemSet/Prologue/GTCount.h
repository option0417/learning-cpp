/*
 * GTCount.h
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#ifndef GTCOUNT_H_
#define GTCOUNT_H_

namespace op {

class GTCount {
public:
	GTCount();
	virtual ~GTCount();

	int getGTCount();
private:
	void init();

	int f[5];
	int g[5];
};

} /* namespace op */
#endif /* GTCOUNT_H_ */
