/*
 * GTCount.cpp
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#include "GTCount.h"

namespace op {

GTCount::GTCount() {
	init();
}

GTCount::~GTCount() {}

void GTCount::init() {
	f[0] = 2;
	f[1] = 4;
	f[2] = 5;
	f[3] = 8;
	f[4] = 10;

	g[0] = 1;
	g[1] = 3;
	g[2] = 6;
	g[3] = 7;
	g[4] = 11;
}

int GTCount::getGTCount() {
	int cnt = 0;
	int tmp = 0;

	for (int idx = 0; idx < 5; idx++) {
		while (f[idx] >= g[tmp] && tmp < 5) {
			tmp++;
		}
		cnt += tmp;
	}

	return cnt;
}

} /* namespace op */
