/*
 * SelectionSort.cpp
 *
 *  Created on: 2012/1/11
 *      Author: option0417
 */
#include <iostream>
#include "SelectionSort.h"

SelectionSort::SelectionSort() {
	vals = new int[10];

	for (int i = 0; i < 10; i++) {
		vals[i] = (10 - i);
	}
}

SelectionSort::SelectionSort(int* vals, int size) {
	this->vals = vals;
	this->size = size;
}

SelectionSort::~SelectionSort() {
	delete [] vals;
}

int* SelectionSort::sort() {
	int min = -1;
	int cur = -1;
	for (int idx = 0; idx < size; idx++) {
		min = vals[idx];
		cur = idx;
		for (int subIdx = idx + 1; subIdx < size; subIdx++) {
			if (min > vals[subIdx]) {
				min = vals[subIdx];
				cur = subIdx;
			}
		}
		if (cur != idx) {
			swap(idx, cur);
		}
	}
	return vals;
}

void SelectionSort::swap(int a, int b) {
	vals[a] = vals[a] + vals[b];
	vals[b] = vals[a] - vals[b];
	vals[a] = vals[a] - vals[b];
}

void SelectionSort::show() {
	for (int idx = 0; idx < size; idx++) {
		std::cout<<vals[idx]<<" ";
	}
	std::cout<<std::endl;
}
