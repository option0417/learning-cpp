/*
 * quicksort.h
 *
 *  Created on: 2010/8/30
 *      Author: option0417
 */

#ifndef QUICKSORT_H_
#define QUICKSORT_H_
#include <iostream>

enum Flag {one, two, three };
class QuickSort {
private:
	int key;
	int left;
	int right;
	int size;
	int* list;
	int count;
	Flag flag;
public:
	QuickSort();
	QuickSort(int _size);
	~QuickSort();
	void methodOne();
	void methodTwo();
	void methodThree();
private:
	void initial();
	void show();
	void sorting(int l, int r);
	void swap(int l, int r);
};

#endif /* QUICKSORT_H_ */
