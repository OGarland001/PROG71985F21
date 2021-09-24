// prog71985f21 - week03 - Write an algorithm to find the maximum of three numbers a, b, and c. 
// The 3 numbers should be input by the user at runtime. The output should be stored in ’max’ and 
// printed to the screen.
// steveh - sept 24 2021

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	// The 3 numbers should be input by the user at runtime
	printf("please enter 3 numbers separated by a space character: ");
	if (scanf_s("%d %d %d", &num1, &num2, &num3) != 3)
	{
		//failure
		printf("error entering numbers\n");
		exit(1);
	}



	//  find the maximum of three numbers a, b, and c. 


	//The output should be stored in ’max’and printed to the screen.



	return(0);
}