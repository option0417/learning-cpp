/*
 * main.cpp
 *
 *  Created on: 2011/11/6
 *      Author: option0417
 */
#include "DataStructure/Stack/IntStack.h"
#include "Algorithms/InsertionSort/InsertSort.h"
#include "Algorithms/SelectionSort/SelectionSort.h"
#include "Algorithms/BubbleSort/BubbleSort.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void single99();
void double99();

int main(void) {
	srand(time(NULL));
	int size = 0;
	std::cin>>size;

	int vals[size];

	for (int i = 0; i < size; i++) {
		vals[i] = (int)rand() % 100 + 1;
	}

	for (int i = 0; i < size; i++) {
		std::cout<<vals[i]<<" ";
	}
	std::cout<<std::endl;

	//InsertSort* sort = new InsertSort(vals, 6);
	//IAlgorithm* sort = new SelectionSort(vals, 7);
	IAlgorithm* sort = new BubbleSort(vals, size);

	sort->sort();

	for (int i = 0; i < size; i++) {
		std::cout<<vals[i]<<" ";
	}
	std::cout<<std::endl;

	//sort->show();

	//single99();
	//double99();

	return 0;
}

void single99() {
	for (int i = 0; i < 9 * 9; std::cout<<(i/9 + 1)<<" * "<<(i%9 + 1)<<" = "<<(i/9 + 1) * (i%9 + 1)<<std::endl, i++);
}

void double99() {
	for (int i = 1, j = 1; i <= 9; std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl, j == 9 ? j =1, i++ : j++);
}
