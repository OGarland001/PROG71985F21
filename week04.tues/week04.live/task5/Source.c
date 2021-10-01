// prog71985f21 - week03 - input 3 numbers, find maximum.
// steveh - sep 2021

// version history
//		1.0	sep 28			steveh				finished and tested
//		0.1	week03		steveh				initial start

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int first, second, third;

	printf("enter 3 values, separated by a space: ");
	if (scanf("%d %d %d", &first, &second, &third) != 3)
	{
		printf("you did not enter 3 values\n");
		exit(1);
	}

	int max;
	//compare
	if (first > second)
		max = first;
	else
		max = second;

	if (third > max)
		max = third;

	//print
	printf("%d is the biggest\n", max);

	return(0);
}