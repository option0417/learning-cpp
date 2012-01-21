#include <stdio.h>
#include "PrimeNumber.h"

int PrimeNumExecuter(void) {
	int inNum = 0;

	printf("Give me a positive integer and i'll show Prime Number list in this range :\n");
	fflush(stdout);
	scanf("%d", &inNum);

	getPrimeNumList(inNum);

	return 0;
}

void getPrimeNumList(int num) {
	int idx;
	int count = 0;
	for(idx = 2; idx <= num; idx++)
	{
		if( isPrimeNum(idx) )
		{
			printf("%d ", idx);
			count++;
		}

		if( count != 0 && (count%10) == 0 )
		{
			printf("\n");
			count = 0;
		}
	}
}

int isPrimeNum(int num) {
	int idx;
	int count = 0;
	for(idx = 2; idx <= num/2; idx++)
	{
		if( (num%idx) == 0 )
			count++;

		if(count >= 1)
			return 0;
	}
	return 1;
}
