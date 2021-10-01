// comments

#include "utils.h"


int findMaxOf3Ints(int a, int b, int c)
{
	int max;

	if (a > b)   // 4 5 6 
		max = a;			// step 1 :  compare 4 and 5
	else								// ditch 4
		max = b;

	if (c > max)			//stored the bigger of 4 & 5,  trivial to compare max and num3
		max = c;

	a = 12;
	return max;
}