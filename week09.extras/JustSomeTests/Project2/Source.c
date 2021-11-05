//prog71985f21 - my interpretation of asn2 refactor q3
//steveh - oct 2021
// opportunities for further improvement
//  1. separate into a .h and .c file for the non-main functions
//  2. add more comments (?)  or maybe just function header comment block - the 3 / thing

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  //for exit
#include <assert.h> //  for assert().  used as defense in depth!

int PromptAndReturnInput(char *);
void CalculateAndPrintOutput(int);

#define DAYSinWEEK 7

int main(void)
{
	int input;

	do 
	{
		input = PromptAndReturnInput("Please enter a value: ");
		if (input)
			CalculateAndPrintOutput(input);
	} while (input > 0);

	return 0;
}

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
	// defense in depth...
	//input = -1;		// just to test assertion
	assert(input > 0);		// never proceed if we don't have input greater than 0

	int weeks = input / DAYSinWEEK;
	int days = input % DAYSinWEEK;
	printf("%d days is %d weeks and %d days\n\n", input, weeks, days);
}
