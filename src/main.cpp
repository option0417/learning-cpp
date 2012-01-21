/*
 * main.cpp
 *
 *  Created on: 2011/11/6
 *      Author: option0417
 */
//#include "Others/RandomVector.h"
//#include "Others/MongoSample.h"
//#include "DataStructure/Stack/IntStack.h"
//#include "DataStructure/Stack/OPStack.h"
//#include "DataStructure/Queue/OPQueue.h"
//#include "DataStructure/LinkedList/ILinkedList.h"
//#include "Algorithms/InsertionSort/InsertSort.h"
//#include "Algorithms/SelectionSort/SelectionSort.h"
//#include "Algorithms/BubbleSort/BubbleSort.h"
//#include "CProblemSet/Prologue/Plateau.h"
//#include "CProblemSet/Prologue/GTCount.h"
//#include "CProblemSet/Prologue/EQCount.h"
//#include "CProblemSet/Prologue/Mindist.h"
//#include "CProblemSet/Prologue/Headtail.h"

#include <iostream>

void single99();
void double99();

int main(void) {

	return 0;
}

void single99() {
	for (int i = 0; i < 9 * 9; std::cout<<(i/9 + 1)<<" * "<<(i%9 + 1)<<" = "<<(i/9 + 1) * (i%9 + 1)<<std::endl, i++);
}

void double99() {
	for (int i = 1, j = 1; i <= 9; std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl, j == 9 ? j = 1, i++ : j++);
}
