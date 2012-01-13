/*
 * quicksort.cpp
 *
 *  Created on: 2010/8/30
 *      Author: option0417
 */
#include "quicksort.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

QuickSort::QuickSort():key(0), left(0), right(19), size(20), count(0) {
	this->initial();
}

QuickSort::QuickSort(int _size) {
	this->size = _size;
	this->key = 0;
	this->left = 0;
	this->right = _size-1;
	this->count = 0;
	this->initial();
}

QuickSort::~QuickSort() {	delete[] list;	}

void QuickSort::initial() {
	srand(time(NULL));
	list = new int[size];
	for(int i=0; i<size; i++)
		list[i] = rand()%100;
	cout<<"Before sort..."<<endl;
	this->show();
}

void QuickSort::show() {
	for(int i=0; i<size; i++) {
		cout<<list[i];
		cout<<"  ";
	}
	cout<<endl;
}

void QuickSort::methodOne() {
	flag = one;
	this->sorting(left, right);
	cout<<"After sort..."<<endl;
	this->show();
	cout<<"Count :"<<this->count<<endl;
}

void QuickSort::methodTwo() {
	flag = two;
	this->key = list[(right-left)/2];
	this->sorting(left, right);
	cout<<"After sort..."<<endl;
	this->show();
	cout<<"Count :"<<this->count<<endl;
}

void QuickSort::methodThree() {
	flag = three;
	this->key = list[0];
	this->sorting(left, right);
	cout<<"After sort..."<<endl;
	this->show();
	cout<<"Count :"<<this->count<<endl;
}

void QuickSort::sorting(int l, int r) {
	if(l < r) {
		int i;
		int j = r;
		switch(flag){
		case one:
			this->key = list[l];	i = l+1;	break;
		case two:
			this->key = list[(right-left)/2];	i = l;	break;
		case three:
			this->key = list[l];	i = l+1;	break;
		}
		cout<<"L :"<<i<<endl;
		cout<<"R :"<<j<<endl;
		while(1) {
			this->count++;
			while(i <= r && list[i] < this->key) i++;
			while(j >= l && list[j] > this->key) j--;

			if(i >= j)
				break;

			this->swap(i, j);
			this->show();
		}
		if(flag == one)	this->swap(l, j);
		//this->sorting(l, j-1);
		//this->sorting(j+1, r);
	}
}

void QuickSort::swap(int l, int r) {
	int tmp = list[l];
	list[l] = list[r];
	list[r] = tmp;
}
