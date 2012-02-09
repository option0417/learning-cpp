/*
 * AlphaBeta.cpp
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#include "AlphaBeta.h"

namespace op {

AlphaBeta::AlphaBeta() {}

AlphaBeta::~AlphaBeta() {
	// TODO Auto-generated destructor stub
}

int AlphaBeta::process(ABNode *node, int &alpha, int &beta, int depth, bool flag) {
	cout<<"At :"<<depth<<endl;
	if (depth == 0) {
		cout<<"Terminal :"<<node->getValue()<<endl;
		return node->getValue();
	}

	if (flag) {
		cout<<"True"<<endl;
		alpha = max(alpha, process(node->getnode(), alpha, beta, depth - 1, !flag));
		cout<<"Alpha :"<<alpha<<endl;
		cout<<"Beta :"<<beta<<endl;
		if (alpha >= beta) {
			cout<<"Beta cut"<<endl;
			cout<<"A :"<<alpha<<endl;
			cout<<"B :"<<beta<<endl;
		}
		return alpha;
	} else {
		cout<<"False"<<endl;
		beta = min(beta, process(node->getnode(), alpha, beta, depth - 1, !flag));
		cout<<"Alpha :"<<alpha<<endl;
		cout<<"Beta :"<<beta<<endl;
		if (alpha >= beta) {
			cout<<"Alpha cut"<<endl;
			cout<<"A :"<<alpha<<endl;
			cout<<"B :"<<beta<<endl;
		}
		return beta;
	}
}

inline int AlphaBeta::max(int a, int b) {
	cout<<"max  a :"<<a<<", b :"<<b<<endl;
	return (a > b) ? a : b;
}

inline int AlphaBeta::min(int a, int b) {
	cout<<"min  a :"<<a<<", b :"<<b<<endl;
	return (a < b) ? a : b;
}


} /* namespace op */
