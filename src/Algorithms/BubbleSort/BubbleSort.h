/*
 * BubbleSort.h
 *
 *  Created on: 2012/1/11
 *      Author: option0417
 */

#ifndef BUBBLESORT_H_
#define BUBBLESORT_H_

#include "../IAlgorithm.h"
class BubbleSort : public IAlgorithm {
public:
	BubbleSort();
	BubbleSort(int*, int);
	virtual ~BubbleSort();

	int* sort();
	void show();
private:
	int* vals;
	int size;

	void swap(int, int);
};

#endif /* BUBBLESORT_H_ */
