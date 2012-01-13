/*
 * InsertSort.h
 *
 *  Created on: 2012/1/11
 *      Author: option0417
 */

#ifndef INSERTSORT_H_
#define INSERTSORT_H_

#include "../IAlgorithm.h"

class InsertSort : public IAlgorithm {
public:
	InsertSort();
	InsertSort(int*, int);
	virtual ~InsertSort();

	int* sort();
	void show();
private:
	int* vals;
	int size;

	void insert(int, int);
};

#endif /* INSERTSORT_H_ */
