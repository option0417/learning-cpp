/*
 * AlphaBeta.cpp
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#include "AlphaBeta.h"

namespace op {

int AlphaBeta::count = 0;

AlphaBeta::AlphaBeta() : alpha(0), beta(0), depth(0), ptr(0) {}

AlphaBeta::~AlphaBeta() {
	putPtr();
}

int AlphaBeta::process(ABNode *node, int tmpalpha, int tmpbeta, int depth, bool flag) {
	//cout<<"At Level "<<depth<<endl;
	alpha = tmpalpha;
	beta = tmpbeta;
	if (depth == 0) {
		cout<<"Terminal :"<<node->getValue()<<endl;
		return node->getValue();
	}

	if (flag) {
		//cout<<"Get Max"<<endl;
		int cnt = 1;
		while (cnt <= AlphaBeta::degree) {
			AlphaBeta::count++;
			//cout<<"degree :"<<cnt<<endl;
			alpha = max(alpha, getPtr()->process(node->getnode(), alpha, beta, depth - 1, !flag));
			if (alpha >= beta) {
				cout<<"Beta cut"<<endl;
				cout<<"\tAlpha :"<<alpha<<endl;
				cout<<"\tBeta :"<<beta<<endl;
				cout<<"\t\tDepth "<<depth<<" Result "<<alpha<<endl;
				return alpha;
			}
			cnt++;
			//boost::this_thread::sleep(boost::posix_time::seconds(0));
		}
		//cout<<"Depth "<<depth<<" Result "<<alpha<<", Cnt : "<<cnt<<endl;
		return alpha;
	} else {
		//cout<<"Get Min"<<endl;
		int cnt = 1;
		while (cnt <= degree) {
			AlphaBeta::count++;
			//cout<<"degree :"<<cnt<<endl;
			beta = min(beta, getPtr()->process(node->getnode(), alpha, beta, depth - 1, !flag));
			if (alpha >= beta) {
				cout<<"Alpha cut"<<endl;
				cout<<"\tAlpha :"<<alpha<<endl;
				cout<<"\tBeta :"<<beta<<endl;
				cout<<"\t\tDepth "<<depth<<" Result "<<beta<<endl;
				return beta;
			}
			cnt++;
			//boost::this_thread::sleep(boost::posix_time::seconds(0));
		}
		//cout<<"Depth "<<depth<<" Result "<<beta<<", Cnt : "<<cnt<<endl;
		return beta;
	}
}

inline int AlphaBeta::max(int a, int b) {
	//cout<<"max  a :"<<a<<", b :"<<b<<endl;
	return (a > b) ? a : b;
}

inline int AlphaBeta::min(int a, int b) {
	//cout<<"min  a :"<<a<<", b :"<<b<<endl;
	return (a < b) ? a : b;
}

inline AlphaBeta* AlphaBeta::getPtr() {
	if (ptr == 0) {
		ptr = new AlphaBeta();
	}
	return ptr;
}

inline void AlphaBeta::putPtr() {
	if (ptr) {
		delete ptr;
	}
}


int AlphaBeta::getTimes() {
	return AlphaBeta::count;
}

} /* namespace op */
