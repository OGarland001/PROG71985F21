// prog71985f21 - week04 -- Write an algorithm to find the maximum of three numbers a, b, and c. The 3 numbers 
// should be input by the user at runtime. The output should be stored in ’max’ and printed to the screen.
// steveh - sept 2021


//
//   single responsibility!       SOLID  principles
// 
//version history
//0.1		week04	initial	not done. 

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"


int main(void)
{
	int num1  = 0;
	int num2 = 0;
	int num3 = 0;
	//input from user
	printf("please enter 3 numbers, separated by a space character: ");
	if (scanf_s("%d %d %d", &num1, &num2, &num3) != 3)  // start num1 = 0,  end num1 = 4 (my input)    ==> pass by reference!!!
	{																	// & => address of 
		printf("bad input\n");
		exit(1);
	}
	int max = findMaxOf3Ints(num1, num2, num3);   // pass parameters by value  (a copy of)    ** good for when we dont change the values

	printf("%d\n", num1);

	// print the output
	printf("max is %d\n", max);

	return (0);
}

