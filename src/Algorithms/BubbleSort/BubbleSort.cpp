/*
 * BubbleSort.cpp
 *
 *  Created on: 2012/1/11
 *      Author: option0417
 */

#include "BubbleSort.h"

BubbleSort::BubbleSort() {
	vals = new int[10];

	for (int i = 0; i < 10; i++) {
		vals[i] = (10 - i);
	}
}

BubbleSort::BubbleSort(int* vals, int size) {
	this->vals = vals;
	this->size = size;
}

BubbleSort::~BubbleSort() {
	delete [] vals;
}

int* BubbleSort::sort() {
	int min = -1;
	int cur = -1;
	for (int idx = 0; idx < size; idx++) {
		//show();
		min = vals[idx];
		cur = idx;
		for (int subIdx = idx + 1; subIdx < size; subIdx++) {
			if (min > vals[subIdx]) {
				swap(cur, subIdx);
				cur = subIdx;
			}
		}
	}
	return vals;
}

void BubbleSort::swap(int a, int b) {
	vals[a] = vals[a] + vals[b];
	vals[b] = vals[a] - vals[b];
	vals[a] = vals[a] - vals[b];
}

void BubbleSort::show() {
	for (int idx = 0; idx < size; idx++) {
		std::cout<<vals[idx]<<" ";
	}
	std::cout<<std::endl;
}
