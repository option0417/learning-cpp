#include <stdio.h>
#include "ArmsNumber.h"

int ArmsExecuter(void) {
	int inNum = 0;
	printf("Give me a Three-Digit number and i'll ckeck it, if it is Armstrong Number.\nC:\\>");
	fflush(stdout);
	scanf("%d", &inNum);
	
	if( isThreeDigit(inNum) )
	{
		if( isArmstrong(inNum) )
			printf("Yes, it is\n");
		else
			printf("No, it is not\n");
	}
	else
		printf("Wrong Number!!");
	
    return 0;
}

int isThreeDigit(int num) {
	if( num > 999 || num < 100)
		return 0;
	else
		return 1;
}

int isArmstrong(int num) {
	int a, b, c = 0;
	int result = 0;

	a =  num/100;
	b =  (num%100)/10;
	c =  num%10;

	result = a*a*a + b*b*b + c*c*c;
	if( num == result)
		return 1;
	else
		return 0;
}
