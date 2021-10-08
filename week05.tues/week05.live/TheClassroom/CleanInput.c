#include "CleanInput.h"

bool RemoveBadChars(char* input)
{
	for (int i = 0; i < strlen(input); i++)
		if (input[i] == '\n')
			input[i] = '\0';

	return true;
}