// prog71985f21 - week02 - simple hello user program
// steveh   sep/2021

// Version history
// 1.0  week 03 - all done, working
// 0.1  week 02 - finished but errors

#include <stdio.h>

#define MAXNAME		30	      // this is the maximum storage space for a name
#define PI		3.1415

int main(void)
{
	char name[MAXNAME];


	//ask the person for their name
	printf("input your name: ");
	scanf_s("%s", name, MAXNAME);

	// print our greeting

	printf("hello %s\n", name);

	return (0);
}