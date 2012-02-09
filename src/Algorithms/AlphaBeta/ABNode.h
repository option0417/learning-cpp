/*
 * ABNode.h
 *
 *  Created on: Feb 8, 2012
 *      Author: option0417
 */

#ifndef ABNODE_H_
#define ABNODE_H_

#include <iostream>

namespace op {

class ABNode {
public:
	ABNode() {
		srand(time(NULL));
		this->val = new int((int)rand() % 100 + 1);
		more = 0;
		less = 0;
	}

	~ABNode() {
		if (more) {
			delete more;
			more = 0;
		}

		if (less) {
			delete less;
			less = 0;
		}
	}

	const int& getValue() {
		return *val;
	}

	ABNode* setNext(ABNode* node) {
		if (*val < node->getValue()) {
			if (more) {
				more->setNext(node);
			} else {
				more = node;
			}
		} else {
			if (less) {
				less->setNext(node);
			} else {
				less = node;
			}
		}

		return node;
	}

	ABNode* getnode() {
		return setNext(new ABNode());
	}
private:
	const int *val;
	ABNode *more;
	ABNode *less;
};


} /* namespace op */
#endif /* ABNODE_H_ */
