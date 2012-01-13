/*
 * StackCpp.h
 *
 *  Created on: 2011/11/6
 *      Author: option0417
 */

#ifndef INTSTACK_H_
#define INTSTACK_H_

class IntStack {
private:
	int* val;
	int* top;
	int* bottom;
	int capacity;
	int curlen;

public:
	IntStack();
	IntStack(int );
	~IntStack();

	void push(const int );
	int pop();
	int size();

	void checkCapacity(int );
	void resize(int );

};

#endif /* INTSTACK_H_ */
