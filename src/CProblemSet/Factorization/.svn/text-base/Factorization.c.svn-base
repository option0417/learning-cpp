#include <stdio.h>
#include "Factorization.h"

int FactorizationExecuter() {
	int inNum = 0;

	printf("Give me a positive integer and i'll ckeck it, if it is Prime Number.\nC:\\>");
	fflush(stdout);
	scanf("%d", &inNum);

	Factorization(inNum);

	return 0;
}

int Factorization(int num) {
	int result[2][50];
	int idx = 0;
	int arrayIdx = 0;
	int count = 0;

	for(idx = 2;idx <= num; idx++)
	{
		if( isPNum(idx) )
		{
			while( (num%idx) == 0)
			{
				count++;
				num /= idx;
			}

			if( count > 0)
			{
				result[0][arrayIdx] = idx;
				result[1][arrayIdx] = count;
				arrayIdx++;
				count = 0;
			}
		}
	}

	for(idx = 0; idx < arrayIdx; idx++)
		printf("%d(%d)\n", result[0][idx], result[1][idx]);
	return 0;
}

int isPNum(int num) {
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
