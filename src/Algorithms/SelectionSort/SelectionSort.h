/*
 * SelectionSort.h
 *
 *  Created on: 2012/1/11
 *      Author: option0417
 */

#ifndef SELECTIONSORT_H_
#define SELECTIONSORT_H_

#include "../IAlgorithm.h"

class SelectionSort : public IAlgorithm {
public:
	SelectionSort();
	SelectionSort(int*, int);
	virtual ~SelectionSort();

	int* sort();
	void show();

private:
	int* vals;
	int size;

	void swap(int, int);
};

#endif /* SELECTIONSORT_H_ */
