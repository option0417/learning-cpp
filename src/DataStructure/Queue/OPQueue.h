/*
 * OPQueue.h
 *
 *  Created on: Jan 21, 2012
 *      Author: option0417
 */

#ifndef OPQUEUE_H_
#define OPQUEUE_H_

#include <iostream>

namespace op {

template <typename T>
class OPQueue {
public:
	OPQueue();
	OPQueue(int);
	~OPQueue();

	void enqueue(const T&);
	const T& dequeue();
	int size();

	void show();
private:
	T* vals;
	T* front;
	T* rear;
	int capacity;
	int currLength;

	void checkCapacity(const int);
};

template <typename T>
OPQueue<T>::OPQueue() {
	this(1);
}

template <typename T>
OPQueue<T>::OPQueue(int _capacity) {
	capacity = _capacity;
	vals = new T[capacity];
	front = vals;
	rear = front;
	currLength = 0;
}

template <typename T>
OPQueue<T>::~OPQueue() {
	front = 0;
	rear = 0;
	delete [] vals;
}

template <typename T>
void OPQueue<T>::enqueue(const T& value) {
	//checkCapacity(currLength + 1);
	std::cout<<"enqueueSize : "<<currLength<<std::endl;
	if (currLength < capacity) {
		*front = value;
		front++;
		currLength++;
	}

	if (currLength == capacity) {
		std::cout<<"Resetfront"<<std::endl;
		front = &vals[0];
	}
}

template <typename T>
const T& OPQueue<T>::dequeue() {
	std::cout<<"dequeueSize : "<<currLength<<std::endl;
	if (currLength > 0) {
		currLength--;
		return *rear++;
	}

	if (currLength == 0) {
		std::cout<<"Resetrear"<<std::endl;
		rear = &vals[0];
		*rear = 0;
		return *rear;
	}

	return *rear;
}

template <typename T>
int OPQueue<T>::size() {
	return capacity;
}

template <typename T>
void OPQueue<T>::checkCapacity(const int capacity) {
	if (this->capacity < capacity) {
		std::cout<<"OutOfSpace"<<std::endl;
	}
}

template <typename T>
void OPQueue<T>::show() {
	for (int i = 0; i < capacity; i++) {
		std::cout<<vals[i]<<" ";
	}std::cout<<std::endl;
}

} /* namespace op */
#endif /* OPQUEUE_H_ */
