#include "CleanInput.h"
#include <string.h>

bool RemoveBadChars(char* input)
{
	for (int i = 0; i < strlen(input); i++)
	{
		//replace newline with end-of-string marker
		if (input[i] == '\n')
			input[i] = '\0';

		//optionally i can add more checks...
		// if(!isalpha(input[i])
		//        input[i] = '.';

		//and more...
	}

	return true;
}