// week02 task4 - simple personalized greeting
// steveh  - prog71985-f21


#include <stdio.h>

int main(void)
{
	// ask for my name
	printf("please enter your name: ");

	char name[20];
	scanf_s("%s", name);

	//print my name
	printf("\nhello %s\n", name);

	return(0);
}