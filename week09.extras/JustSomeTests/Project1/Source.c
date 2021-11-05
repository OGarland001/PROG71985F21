#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int inValue;

	while (1)
	{
		printf("enter some value (between 0 and 100, inclusive): ");

		if ((scanf("%d", &inValue) == 1) && (inValue <= 100) && (inValue >= 0))
		{
			while (getchar() != '\n');				// clear remaining crap in stdin buffer
			printf("good.  useable input is %d\n", inValue);
		}
		else
		{
			while (getchar() != '\n');			// clear remaining crap in stdin buffer
			printf("bad\n");
		}
	}



	return 0;
}