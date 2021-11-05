//prog71985f21 - my interpretation of asn2 refactor q3
//steveh - oct 2021
// opportunities for further improvement
//  1. add more comments (?)  or maybe just function header comment block - the 3 / thing

#include "utilities.h"

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


