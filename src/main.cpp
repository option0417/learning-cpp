/*
 * main.cpp
 *
 *  Created on: 2011/11/6
 *      Author: option0417
 */
//#include "Others/RandomVector.h"
//#include "Others/MongoSample.h"
//#include "DataStructure/Stack/IntStack.h"
#include "DataStructure/Stack/OPStack.h"
#include "DataStructure/LinkedList/ILinkedList.h"
//#include "Algorithms/InsertionSort/InsertSort.h"
//#include "Algorithms/SelectionSort/SelectionSort.h"
//#include "Algorithms/BubbleSort/BubbleSort.h"
#include <iostream>

void single99();
void double99();

int main(void) {
//	int size = 0;
//	std::cout<<"Size of Vector : ";
//	std::cin>>size;
//
//	RandomVector randomVector(size);
//	randomVector.show();

	//int* vals = &(*randomVector.getVector())[0];

	//InsertSort* sort1 = new InsertSort(randomVector.getVector().data(), size);
	//IAlgorithm* sort2 = new SelectionSort(vals, size);
	//IAlgorithm* sort3 = new BubbleSort(randomVector.getVector().data(), size));

	//sort1->sort();
	//sort2->sort();
	//sort3->sort();

//	for (int i = 0; i < size; i++) {
//		std::cout<<vals[i]<<" ";
//	}std::cout<<std::endl;


	//ILinkedList<int> list;



//	ILinkedList<int> *iLinkedList = new ILinkedList<int>();
//	iLinkedList->add(5);
//	iLinkedList->add(2);
//	iLinkedList->add(1);
//	std::cout<<"Size : "<<iLinkedList->size()<<std::endl;
//	std::cout<<"Val : "<<iLinkedList->get(0)<<std::endl;
//	std::cout<<"Val : "<<iLinkedList->get(1)<<std::endl;
//	std::cout<<"Val : "<<iLinkedList->get(2)<<std::endl;
//	std::cout<<"Val : "<<iLinkedList->get(0)<<std::endl;
//	std::cout<<"Val : "<<iLinkedList->get(2)<<std::endl;

	op::OPStack<int> intStack(5);
	std::cout<<"Size : "<<intStack.size()<<std::endl;
	intStack.push(1);
	intStack.push(2);
	intStack.push(4);
	intStack.push(5);
	intStack.push(3);
	std::cout<<"POP1 : "<<intStack.pop()<<std::endl;
	std::cout<<"POP2 : "<<intStack.pop()<<std::endl;
	std::cout<<"POP3 : "<<intStack.pop()<<std::endl;
	std::cout<<"POP4 : "<<intStack.pop()<<std::endl;
	std::cout<<"POP5 : "<<intStack.pop()<<std::endl;

	return 0;
}

void single99() {
	for (int i = 0; i < 9 * 9; std::cout<<(i/9 + 1)<<" * "<<(i%9 + 1)<<" = "<<(i/9 + 1) * (i%9 + 1)<<std::endl, i++);
}

void double99() {
	for (int i = 1, j = 1; i <= 9; std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl, j == 9 ? j =1, i++ : j++);
}
