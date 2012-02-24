/*
 * AlphaBeta.h
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#ifndef ALPHABETA_H_
#define ALPHABETA_H_

#include "ABNode.h"
#include <boost/thread/thread.hpp>
#include <boost/thread/xtime.hpp>
#include <iostream>
using namespace std;

namespace op {

class AlphaBeta {
public:
	AlphaBeta();
	~AlphaBeta();
	int process(ABNode*, int, int, int, bool);
	inline int max(int, int);
	inline int min(int, int);
private:
	static const int degree = 2;
	int alpha;
	int beta;
	int depth;
	AlphaBeta *ptr;
	inline AlphaBeta* getPtr();
	inline void putPtr();
};

} /* namespace op */
#endif /* ALPHABETA_H_ */
