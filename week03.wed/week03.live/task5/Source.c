// prog71985f21 - week03 -- Write an algorithm to find the maximum of three numbers a, b, and c. The 3 numbers 
// should be input by the user at runtime. The output should be stored in ’max’ and printed to the screen.
// steveh - sept 2021

//version history
//0.1		week03	initial	not done. 

#include <stdio.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	//input from user
	printf("please enter 3 numbers, separated by a space character: ");
	if (scanf_s("%d %d %d", num1, num2, num3) != 3)
	{
		printf("bad input\n");
		exit(1);
	}
	//max comparisons


	// print the output

	return (0);
}