// comments

#include "findMax.h"

int FindMaxOf3Ints(int first, int second, int third)
{
	int max;
	//compare
	if (first > second)
		max = first;
	else
		max = second;

	if (third > max)
		max = third;

	return max;
}

void swap(int left, int right)
{  // yep, i fixed it
	int temp;
	temp = left;
	left = right;
	right = temp;

}
