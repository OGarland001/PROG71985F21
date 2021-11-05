//prog71985f21 - my interpretation of asn2 refactor q3
//steveh - oct 2021
// opportunities for further improvement
//  1. separate into a .h and .c file for the non-main functions
//  2. add more comments (?)  or maybe just function header comment block - the 3 / thing

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  //for exit
#include <stdbool.h>

typedef enum limittype {NONE, LOWER, UPPER} LIMITTYPE;

bool PromptAndReturnInput(char*, int*, int limit, LIMITTYPE);
void CalculateAndPrintOutput(int);

#define DAYSinWEEK 7
#define MININPUT	0

int main(void)
{
	bool doAgain;
	do
	{
		int input;
		if (doAgain = PromptAndReturnInput("Please enter a value: ", &input, MININPUT, LOWER))
			CalculateAndPrintOutput(input);
	} while (doAgain);

	return 0;
}

bool PromptAndReturnInput(char* prompt, int *input, int limit, LIMITTYPE limitType)
{
	printf(prompt);
	if (scanf("%d", input) != 1)
		return false;
	switch (limitType)
	{
	case(NONE):
		return true;
		break;
	case(LOWER):
		if (*input < limit)
			return false;
		break;
	case(UPPER):
		if (*input > limit)
			return false;
		break;
	default:
		return false;		// if somethign else happened, false is a safer response
	}
	return true;
}

void CalculateAndPrintOutput(int input)
{
	int weeks = input / DAYSinWEEK;
	int days = input % DAYSinWEEK;
	printf("%d days is %d weeks and %d days\n\n", input, weeks, days);
}
