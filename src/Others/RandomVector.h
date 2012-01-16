/*
 * RandomVector.h
 *
 *  Created on: Jan 15, 2012
 *      Author: option0417
 */

#ifndef RANDOMVECTOR_H_
#define RANDOMVECTOR_H_

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

class RandomVector {
public:
	RandomVector();
	RandomVector(int);
	virtual ~RandomVector();

	std::vector<int>* getVector();
	void show();
private:
	std::vector<int> *intVector;
	int size;

	void init();
};

#endif /* RANDOMVECTOR_H_ */
