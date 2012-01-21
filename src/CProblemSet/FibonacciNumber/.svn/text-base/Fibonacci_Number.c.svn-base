#include <stdio.h>
#include "Fibonacci_Number.h"

int FibonacciNumberExecuter(void) {
	int inNum = 0;

	printf("Give me a positive integer and i'll calculate Fibonacci Number by this times :\n");
	fflush(stdout);
	scanf("%d", &inNum);

	showFNumList(inNum);
	return 0;
}

int showFNumList(int times) {
	int front = 1;
	int rear = 1;
	int result = 0;
	int idx = 0;

	printf("%d %d ", front, rear);
	for(idx = 2; idx < times; idx++)
	{
		result = front + rear;
		printf("%d ", result);
		front = result;
		rear = front;
	}
	return 0;
}
