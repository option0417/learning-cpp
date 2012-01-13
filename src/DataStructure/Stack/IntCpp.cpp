/*
 * StackCpp.cpp
 *
 *  Created on: 2011/11/6
 *      Author: option0417
 */
#include "IntStack.h"
#include <iostream>

IntStack::IntStack() {
	capacity = curlen = 0;
	val = new int[1];
	top = val;
	bottom = val;
}

IntStack::IntStack(int size) {
	capacity = size;
	curlen = 0;
	val = new int[capacity];
	top = val;
	bottom = val;
}

IntStack::~IntStack() {
	delete [] val;
}

void IntStack::push(const int _val) {
	checkCapacity(curlen + 1);
	curlen++;
	*val = _val;
	val++;
	top = val;
}

int IntStack::pop() {
	curlen--;
	val--;
	top = val;
	return *top;
}

int IntStack::size() {
	return curlen;
}

void IntStack::checkCapacity(int _capacity) {
	if(capacity < _capacity) {
		std::cout<<"Current capacity is "<<capacity<<std::endl;
		std::cout<<"Need resize."<<std::endl;
		resize(_capacity);
	}
}

void IntStack::resize(int _capacity) {
	int* newVal = new int[_capacity + capacity];
	int* tmpBottom = newVal;

	for(int idx = 0; idx < this->curlen; idx++) {
		*newVal = *bottom;
		bottom++;
		newVal++;
	}
	delete[] val;
	val = newVal;
	top = val;
	bottom = tmpBottom;
	capacity += _capacity;
}

