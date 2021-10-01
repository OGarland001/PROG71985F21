// prog71985f21 - week04 - Write an algorithm to find the maximum of three numbers a, b, and c. 
// The 3 numbers should be input by the user at runtime. The output should be stored in ’max’ and 
// printed to the screen.
// 
// SINGLE RESPONSIBILITY -- SOLID
// 
// steveh - sept 24 2021

#include <stdio.h>
#include <stdlib.h>
#include "numberUtilities.h"


int main(void)
{
	int num1;
	int num2;
	int num3;

	// The 3 numbers should be input by the user at runtime
	printf("please enter 3 numbers separated by a space character: ");
	if (scanf_s("%d %d %d", &num1, &num2, &num3) != 3)							// & = address of    pass by reference!
	{
		//failure
		printf("error entering numbers\n");
		exit(1);
	}

	int max = findMaxOf3Ints(num1, num2, num3);  //pass by value, we cannot change the variables.

	//The output should be stored in ’max’and printed to the screen.
	printf("max is %d\n", max);

	return(0);
}

