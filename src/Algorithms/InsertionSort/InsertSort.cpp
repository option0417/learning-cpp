/*
 * InsertSort.cpp
 *
 *  Created on: 2012/1/11
 *      Author: option0417
 */

#include <iostream>
#include "InsertSort.h"

InsertSort::InsertSort() {
	vals = new int[10];

	for (int i = 0; i < 10; i++) {
		vals[i] = (10 - i);
	}
}

InsertSort::InsertSort(int* vals, int size) {
	this->vals = vals;
	this->size = size;
}

InsertSort::~InsertSort() {
	delete [] vals;
}

int* InsertSort::sort() {
	show();
	for (int idx = 1; idx < size; idx++) {
		insert(vals[idx], idx);
	}
	return vals;
}

void InsertSort::insert(int val, int idx) {
	int insertCur = idx - 1;
	while (val < vals[insertCur]) {
		vals[insertCur+1] = vals[insertCur];
		insertCur--;

		if (insertCur == -1) {
			break;
		}
	}
	vals[insertCur+1] = val;
}

void InsertSort::show() {
	for (int idx = 0; idx < size; idx++) {
		std::cout<<vals[idx]<<" ";
	}
	std::cout<<std::endl;
}
