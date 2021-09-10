//
// An example #5
//		mapping variables to formatted printf.
//
// PROG71985 - F21
// Professor SteveH- Sept 2021
//
// revision history
//		1.0		2020-Apr-28			initial	
//      1.1       2021-May-15         reviewed/updated

#include <stdio.h>

int main(void)
{
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);   // one format specifier and two variables
	printf("%d %d %d\n", n);  //three format specifiers and one variable
	printf("%d %d\n", f, g); // wrong type for format specifier.

	return 0;  //no errors
}