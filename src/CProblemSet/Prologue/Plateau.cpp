/*
 * Plateau.cpp
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#include "Plateau.h"

namespace op {

Plateau::Plateau() {
	init();
}

Plateau::~Plateau() {}

void Plateau::init() {
	vals[0] = 1;
	vals[1] = 2;
	vals[2] = 2;
	vals[3] = 3;
	vals[4] = 3;
	vals[5] = 3;
	vals[6] = 4;
	vals[7] = 4;
	vals[8] = 4;
	vals[9] = 4;
}

int Plateau::getPlateau() {
	int cnt = 1;

	for (int idx = 1; idx < 10; idx++) {
		if (vals[idx] == vals[idx - cnt]) {
			cnt++;
		}
	}

	return cnt;
}

} /* namespace op */
