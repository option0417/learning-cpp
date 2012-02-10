/*
 * AlphaBeta.cpp
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#include "AlphaBeta.h"

namespace op {

AlphaBeta::AlphaBeta() {}

AlphaBeta::~AlphaBeta() {}

int AlphaBeta::process(ABNode *node, int &alpha, int &beta, int depth, bool flag) {
	cout<<"At :"<<depth<<endl;
	if (depth == 0) {
		cout<<"Terminal :"<<node->getValue()<<endl;
		return node->getValue();
	}

	if (flag) {
		cout<<"True"<<endl;
		int cnt = 1;
		while (cnt <= AlphaBeta::degree) {
			cout<<"Cnt :"<<cnt<<endl;
			alpha = max(alpha, process(node->getnode(), alpha, beta, depth - 1, !flag));
			if (alpha >= beta) {
				cout<<"Beta cut"<<endl;
				cout<<"A :"<<alpha<<endl;
				cout<<"B :"<<beta<<endl;
				cout<<"Depth "<<depth<<" Result "<<alpha<<endl;
				return alpha;
			}
			cnt++;
			boost::this_thread::sleep(boost::posix_time::seconds(2));
		}
		cout<<"Depth "<<depth<<" Result "<<alpha<<endl;
		return alpha;
	} else {
		cout<<"False"<<endl;
		int cnt = 1;
		while (cnt < degree) {
			beta = min(beta, process(node->getnode(), alpha, beta, depth - 1, !flag));
			if (alpha >= beta) {
				cout<<"Alpha cut"<<endl;
				cout<<"A :"<<alpha<<endl;
				cout<<"B :"<<beta<<endl;
				cout<<"Depth "<<depth<<" Result "<<beta<<endl;
				return beta;
			}
			cnt++;
			boost::this_thread::sleep(boost::posix_time::seconds(2));
		}
		cout<<"Depth "<<depth<<" Result "<<beta<<endl;
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
