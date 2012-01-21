/*
 * Headtail.cpp
 *
 *  Created on: Jan 22, 2012
 *      Author: option0417
 */

#include "Headtail.h"

namespace op {

Headtail::Headtail() {
	init();
}

Headtail::~Headtail() {}

void Headtail::init() {
	// 1, 6, 8, 19, 26, 35, 39, 42, 50, 56
	// 6. 14. 17. 21. 30. 37. 48. 50. 55. 56
	// 3
	vals[0] = 1;
	vals[1] = 5;
	vals[2] = 2;
	vals[3] = 11;
	vals[4] = 7;
	vals[5] = 9;
	vals[6] = 4;
	vals[7] = 3;
	vals[8] = 8;
	vals[9] = 6;
}

int Headtail::getHeadtail() {
	int cnt = 0;
	int f = 0;
	int r = 9;
	int fval = vals[0];
	int rval = vals[9];

	while (f < 10 && r >= 0) {
		if (fval > rval) {
			r--;
			rval += vals[r];
		} else if (fval < rval) {
			f++;
			fval += vals[f];
		} else if (fval == rval) {
			cnt++;
			f++;
			r--;
			rval += vals[r];
			fval += vals[f];
		}
	}

	return cnt;
}

} /* namespace op */
