#include "numberUtilities.h"

int findMaxOf3Ints(int num1, int num2, int num3)
{
	//  find the maximum of three numbers a, b, and c. 
	int max;
	if (num1 > num2)  // 4 5 6   of 4 and 5, if 4 is bigger than make it max
		max = num1;
	else
		max = num2;

	if (num3 > max)  //deal with third input 
		max = num3;

	num3 = 12;
	return max;
}