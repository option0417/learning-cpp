///*
// * ILinkList.cpp
// *
// *  Created on: Jan 16, 2012
// *      Author: option0417
// */
//
//#include "ILinkedList.h"
//
//template <typename T>
//ILinkedList<T>::ILinkedList() {
//	topNode = 0;
//	currNode = 0;
//	node = 0;
//	_size = 0;
//}
//
//template <typename T>
//ILinkedList<T>::ILinkedList(int size) : _size(size){
//	if (_size > 1) {
//		node = new INode();
//		node->val = 0;
//		node->ptr = 0;
//
//		topNode = node;
//		currNode = node;
//	}
//
//
//	for (int cnt = 1; cnt < _size; cnt++) {
//		node = new INode();
//		node->val = 0;
//		node->ptr = 0;
//		currNode->ptr = node;
//		currNode = node;
//	}
//}
//
//template <typename T>
//ILinkedList<T>::~ILinkedList() {
//	while (topNode != 0) {
//		INode *tmp = topNode;
//		topNode = topNode->ptr;
//		delete tmp;
//	}
//}
//
//template <typename T>
//void ILinkedList<T>::add(T val) {
//	node = new INode();
//	node->val = val;
//	node->ptr = 0;
//
//	currNode->ptr = node;
//	currNode = node;
//}
//
//template <typename T>
//void ILinkedList<T>::remove(int index) {
//
//}
//
//template <typename T>
//T ILinkedList<T>::get(int index) {
//	if (topNode != 0) {
//		node = topNode;
//	}
//
//	while (index > 0) {
//		node = node->ptr;
//
//		if (node == 0) {
//			return 0;
//		}
//
//		index--;
//	}
//
//	return node;
//}
//
//template <typename T>
//int ILinkedList<T>::size() {
//	return _size;
//}
