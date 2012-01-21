/*
 * ListAllSubset.c
 *
 *  Created on: 2011/2/24
 *      Author: option0417
 */
#include <stdio.h>
#include "ListAllSubset.h"

#define Length 20

int ListAllSubsetExecutor() {
	int Set[Length];
	int idx;
	for(idx = 0; idx < Length; idx++)
		Set[idx] = idx+1;

	int setLength = Length;
	int subsetLength = 0;
	int count = 0;

	printf("{ }\n");
	for(subsetLength = 1; subsetLength <= setLength; subsetLength++)
	{
		printf("Length : %2d\n", subsetLength);
		for(idx = 0; idx < Length; idx++)
		{
			if( count == 0)
				printf("{");

			count++;
			if(count == subsetLength || idx == Length-1)
			{
				printf("%d", Set[idx]);
				printf("}\t");
				count = 0;
			}
			else
				printf("%d", Set[idx]);
		}
		printf("\n");
	}
	return 0;
}
