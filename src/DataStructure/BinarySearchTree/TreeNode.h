/*
 * TreeNode.h
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#ifndef TREENODE_H_
#define TREENODE_H_

#include <iostream>

namespace op {

template <typename T>
class TreeNode {
public:
	TreeNode(const T&);
	~TreeNode();
	const T& getValue();
	void setNext(TreeNode*);
	void show();
private:
	const T *val;
	TreeNode *more;
	TreeNode *less;
};

template <typename T>
TreeNode<T>::TreeNode(const T& val) {
	this->val = &val;
	more = 0;
	less = 0;
}

template <typename T>
const T& TreeNode<T>::getValue() {
	return *val;
}

template <typename T>
void TreeNode<T>::setNext(TreeNode* node) {
	if (*val > node->getValue()) {
		more = node;
	} else {
		less = node;
	}
}

template <typename T>
void TreeNode<T>::show() {
	try {
		std::cout<<"Root :"<<*val<<std::endl;

		if (less) {
			std::cout<<"l :"<<less->getValue()<<std::endl;
			less->show();
		}

		if (more) {
			std::cout<<"m :"<<more->getValue()<<std::endl;
			more->show();
		}

	} catch (int errCode) {
		std::cout<<"ErrCode : "<<errCode<<std::endl;
	}
}


} /* namespace op */
#endif /* TREENODE_H_ */
