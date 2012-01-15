/*
 * RandomArray.cpp
 *
 *  Created on: Jan 15, 2012
 *      Author: option0417
 */

#include "RandomVector.h"

RandomVector::RandomVector() :size(0) {
	init();
}

RandomVector::RandomVector(int size) :size(size) {
	init();
}

RandomVector::~RandomVector() {
	intVector->clear();
	delete intVector;
	size = 0;
}

std::vector<int>* RandomVector::getVector() {
	return intVector;
}

void RandomVector::show() {
	for (int i = 0; i < size; i++) {
		std::cout<<intVector->at(i)<<" ";
	}
	std::cout<<std::endl;
}

void RandomVector::init() {
	srand(time(NULL));
	intVector = new std::vector<int>();
	intVector->reserve(size);

	for (int i = 0; i < size; i++) {
		intVector->push_back((int)rand() % 100 + 1);
	}
}
