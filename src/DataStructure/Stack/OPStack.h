/*
 * OPStack.h
 *
 *  Created on: Jan 20, 2012
 *      Author: option0417
 */

#ifndef OPSTACK_H_
#define OPSTACK_H_

#include <iostream>

namespace op {

template <typename T>
class OPStack {
public:
	OPStack();
	OPStack(int);
	virtual ~OPStack();

	void push(const T& );
	const T& pop();
	int size();

private:
	T* val;
	T* top;
	T* bottom;
	int capacity;
	int curlen;

	void checkCapacity(int );
	void resize(int );
};

template <typename T>
OPStack<T>::OPStack() {
	this(1);
}

template <typename T>
OPStack<T>::OPStack(int size) {
	capacity = size;
	curlen = 0;

	val = new T[capacity];
	top = val;
	bottom = val;
}

template <typename T>
OPStack<T>::~OPStack() {
	delete [] val;
}

template <typename T>
void OPStack<T>::push(const T& val) {
	//checkCapacity(curlen + 1);
	curlen++;
	*this->val = val;
	this->val++;
	top = this->val;
}

template <typename T>
const T& OPStack<T>::pop() {
	curlen--;
	val--;
	top = val;
	return *top;
}

template <typename T>
int OPStack<T>::size() {
	return capacity;
}

template <typename T>
void OPStack<T>::checkCapacity(int size) {
	if(capacity < size) {
		std::cout<<"Current capacity is "<<capacity<<std::endl;
		std::cout<<"Need resize."<<std::endl;
		resize(size);
	}
}

template <typename T>
void OPStack<T>::resize(int size) {
	T* newVal = new int[(size + capacity) * 2];
	T* tmpBottom = newVal;

	for(int idx = 0; idx < this->curlen; idx++) {
		*newVal = *bottom;
		bottom++;
		newVal++;
	}

	delete[] val;
	val = newVal;
	top = val;
	bottom = tmpBottom;
	capacity += size;
}


} /* namespace op */
#endif /* OPSTACK_H_ */
