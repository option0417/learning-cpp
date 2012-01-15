/*
 * main.cpp
 *
 *  Created on: 2011/11/6
 *      Author: option0417
 */
#include "RandomVector.h"
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
	int size = 0;
	std::cout<<"Size of Vector : ";
	std::cin>>size;

	RandomVector randomVector(size);
	randomVector.show();

	//int* vals = &(*randomVector.getVector())[0];
	int* vals = &randomVector.getVector().at(0);
	std::cout<<vals<<" ";
	std::cout<<&randomVector.getVector().at(0)<<" ";
	std::cout<<std::endl;
	std::cout<<*vals<<" ";
	std::cout<<randomVector.getVector().at(0)<<" ";
	//InsertSort* sort1 = new InsertSort(randomVector.getVector().data(), size);
	//IAlgorithm* sort2 = new SelectionSort(vals, size);
	//IAlgorithm* sort3 = new BubbleSort(randomVector.getVector().data(), size));

	//sort1->sort();
	//sort2->sort();
	//sort3->sort();

	//for (int i = 0; i < size; i++) {
	//	std::cout<<vals[i]<<" ";
	//	//vals++;
	//}std::cout<<std::endl;
	//randomVector.show();
	//sort->show();

	return 0;
}

void single99() {
	for (int i = 0; i < 9 * 9; std::cout<<(i/9 + 1)<<" * "<<(i%9 + 1)<<" = "<<(i/9 + 1) * (i%9 + 1)<<std::endl, i++);
}

void double99() {
	for (int i = 1, j = 1; i <= 9; std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl, j == 9 ? j =1, i++ : j++);
}
