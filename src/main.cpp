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

int main(void) {
	op::TreeNode<int> *root = new op::TreeNode<int>(5);
	op::TreeNode<int> *more = new op::TreeNode<int>(7);
	op::TreeNode<int> *less = new op::TreeNode<int>(3);

	cout<<root->getValue()<<endl;
	cout<<more->getValue()<<endl;
	cout<<less->getValue()<<endl;

	const int *n = &root->getValue();

	cout<<"Addr :"<<&root->getValue()<<", Val :"<<root->getValue()<<endl;
	cout<<"Addr :"<<&n<<", Val :"<<*n<<endl;

	root->setNext(more);
	root->setNext(less);
	root->show();

	return 0;
}

void single99() {
	for (int i = 0; i < 9 * 9; std::cout<<(i/9 + 1)<<" * "<<(i%9 + 1)<<" = "<<(i/9 + 1) * (i%9 + 1)<<std::endl, i++);
}

void double99() {
	for (int i = 1, j = 1; i <= 9; std::cout<<i<<" * "<<j<<" = "<<i*j<<std::endl, j == 9 ? j = 1, i++ : j++);
}
