#include <stdio.h>
#include "swaps.h"

// some examples of pass by value, pass by reference.
// prog71985 - fall 2021 - Professor SteveH

// revision history
//		1.0		2020-June-10			initial
//     1.1      2021-May-27          reviewed and updated

int main(void)
{
	int a = 5;
	int b = 10;
	printf("first: a=%d, b=%d\n", a, b);
	swap(a, b);
	printf("second: a=%d, b=%d\n", a, b);

	printf("\n\nfirst: a=%d, b=%d\n", a, b);
	swap2(&a, &b);										// send the address of a and b to the function 
	printf("second: a=%d, b=%d\n", a, b);

}