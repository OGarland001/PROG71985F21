//prog71985 - clean our input.  right now only \n is bad
//steveh - success week f21

#include "CleanInput.h"
#include <string.h>

bool RemoveBadChars(char* input)
{
	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == '\n')
			input[i] = '\0';
	}

	return true;
}