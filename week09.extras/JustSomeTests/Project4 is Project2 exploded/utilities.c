// prog71985f21 - these are the implementations of the required functionc for project2
// steveh - oct 2021

#include "utilities.h"
#include <stdio.h>
#include <stdlib.h>  //for exit

int PromptAndReturnInput(char* prompt)
{
	int input;
	printf(prompt);
	if (scanf("%d", &input) != 1)
		exit(1);
	if (input < 0)	//to reset negative input
		input = 0;
	return input;
}

void CalculateAndPrintOutput(int input)
{
	int weeks = input / DAYSinWEEK;
	int days = input % DAYSinWEEK;
	printf("%d years is %d weeks and %d days\n\n", input, weeks, days);
}