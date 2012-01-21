/*
 * Mindist.cpp
 *
 *  Created on: Jan 22, 2012
 *      Author: option0417
 */

#include "Mindist.h"

namespace op {

Mindist::Mindist() {
	init();
}

Mindist::~Mindist() {}

void Mindist::init() {
	f[0] = 2;
	f[1] = 4;
	f[2] = 8;
	f[3] = 9;
	f[4] = 10;

	g[0] = 6;
	g[1] = 12;
	g[2] = 30;
	g[3] = 90;
}

int Mindist::getMindist() {
	int dist = std::numeric_limits<int>::max();
	int fidx = 0;
	int gidx = 0;



	while (fidx < 5 && gidx < 4) {
		if (f[fidx] - g[gidx] < 0) {
			if (dist > getModulus(f[fidx] - g[gidx])) {
				dist = getModulus(f[fidx] - g[gidx]);
			}
			fidx++;
		} else if (f[fidx] - g[gidx] > 0) {
			if (dist > getModulus(f[fidx] - g[gidx])) {
				dist = getModulus(f[fidx] - g[gidx]);
			}
			gidx++;
		} else if (f[fidx] - g[gidx] == 0) {
			return 0;
		}
	}

	return dist;
}

int Mindist::getModulus(int num) {
	return (num > 0) ? num : (0-num);
}

} /* namespace op */
