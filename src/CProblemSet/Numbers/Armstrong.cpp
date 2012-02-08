/*
 * Armstrong.cpp
 *
 *  Created on: Jan 22, 2012
 *      Author: option0417
 */

#include "Armstrong.h"

namespace op {

Armstrong::Armstrong() {
	a = 0;
	b = 0;
	c = 0;
	cnt = 0;
	vals = new int(5);
}

Armstrong::~Armstrong() {
	delete [] vals;
}

int* Armstrong::getArmstrong() {
	int num = 0;
	int num2 = 0;

	for (a = 1; a <= 9; a++) {
		for (b = 0; b <= 9; b++) {
			for (c = 0; c <= 9; c++) {
				num = (a*100) + (b*10) + c;
				num2 = pow(a, 3) + pow(b, 3) + pow(c, 3);

				if (num == num2) {
					vals[cnt] = num;
					cnt++;
				}
			}
		}
	}

	return vals;
}

int Armstrong::size() {
	return cnt;
}

} /* namespace op */
