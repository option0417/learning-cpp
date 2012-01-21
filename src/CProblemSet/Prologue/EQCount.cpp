/*
 * EQCount.cpp
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#include "EQCount.h"

namespace op {

EQCount::EQCount() {
	init();
}

EQCount::~EQCount() {}

void EQCount::init() {
	f[0] = 2;
	f[1] = 4;
	f[2] = 5;
	f[3] = 8;
	f[4] = 10;

	g[0] = 1;
	g[1] = 2;
	g[2] = 6;
	g[3] = 8;
	g[4] = 10;
}

int EQCount::getEQCount() {
	int cnt = 0;
	int fidx = 0;
	int gidx = 0;

	while (fidx < 5 && gidx < 5) {
		if (f[fidx] != g[gidx] && f[fidx] > g[gidx]) {
			gidx++;
		} else if (f[fidx] == g[gidx]) {
			cnt++;
			fidx++;
		} else {
			fidx++;
		}
	}

//	while (fidx < 5 && gidx < 5) {
//		if (f[fidx] > g[gidx]) {
//			gidx++;
//		} else if (f[fidx] < g[gidx]) {
//			fidx++;
//		} else if (f[fidx] == g[gidx]) {
//			fidx++;
//			gidx++;
//			cnt++;
//		}
//	}

	return cnt;
}

} /* namespace op */
