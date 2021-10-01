// prog71985f21 - week04 - input 3 numbers, find maximum.  intro to functions
// 
//  single responsibility    (S from SOLID)
// 
// 
// steveh - sep 2021

// version history
//		1.0	sep 28			steveh				finished and tested
//		0.1	week03		steveh				initial start

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "findMax.h"

int main(void)
{
	int first = 0, second = 0, third = 0;
	int max;

	printf("enter 3 values, separated by a space: ");
	if (scanf("%d %d %d", &first, &second, &third) != 3) // & => the address of  (reference)
	{
		printf("you did not enter 3 values\n");
		exit(1);
	}
	
	swap(first, second);  // this is by value.  big fail - we need to pass by reference

	max = FindMaxOf3Ints(first, second, third);  // by value

	//print
	printf("%d is the biggest\n", max);

	return(0);
}