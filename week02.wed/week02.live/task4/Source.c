// prog71985f21 - week02 - simple hello user program
// steveh   sep/2021

#include <stdio.h>

int main(void)
{
	char name[15];

	//ask the person for their name
	printf("input your name: ");
	scanf("%s", &name);

	// print our greeting

	printf("hello %s\n", name);

	return (0);
}