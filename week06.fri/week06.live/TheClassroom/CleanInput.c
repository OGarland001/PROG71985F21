#include "CleanInput.h"
#include <string.h>

bool RemoveBadChars(char* input)
{
	for (int i = 0; i < strlen(input); i++)
	{
		// remove extraneous newline
		if (input[i] == '\n')
			input[i] = '\0';
	}

	return true;
}