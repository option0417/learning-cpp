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
#include "DataStructure/BinarySearchTree/TreeNode.h"
//#include "Algorithms/InsertionSort/InsertSort.h"
//#include "Algorithms/SelectionSort/SelectionSort.h"
//#include "Algorithms/BubbleSort/BubbleSort.h"
#include "Algorithms/AlphaBeta/AlphaBeta.h"
#include "Algorithms/AlphaBeta/ABNode.h"
//#include "CProblemSet/Prologue/Plateau.h"
//#include "CProblemSet/Prologue/GTCount.h"
//#include "CProblemSet/Prologue/EQCount.h"
//#include "CProblemSet/Prologue/Mindist.h"
//#include "CProblemSet/Prologue/Headtail.h"
//#include "CProblemSet/Numbers/Armstrong.h"

#include <iostream>
using namespace std;

void single99();
void double99();

int foo1();
int foo2();
int foo3(int);
int foo(int (*)(), int (*)());

int main(void) {

//	int (*fun1)() = foo1;
//	int (*fun2)() = foo2;
//	int (*fun3)(int) = foo3;
//
//	cout<<foo(fun1, fun2)<<endl;
//	cout<<fun3(5)<<endl;

	int alpha = -1000;
	int beta = 1000;
	int depth = 3;

	op::AlphaBeta ab;
	op::ABNode *startNode = new op::ABNode();
	cout<<"Result : "<<ab.process(startNode, alpha, beta, depth, true)<<endl;

	return 0;
}

int foo1() {
	return 1;
}
int foo2() {
	return 2;
}

int foo3(int val) {
	return val;
}

int foo(int (*fun1)(), int (*fun2)()) {
	return fun1() + fun2();
}

void single99() {
	for (int i = 0; i < 9 * 9; std::cout<<(i/9 + 1)<<" * "<<(i%9 + 1)<<" = "<<(i/9 + 1) * (i%9 + 1)<<std::endl, i++);
}

void double99() {
	for (int i = 1, j = 1; i <= 9; std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl, j == 9 ? j = 1, i++ : j++);
}
