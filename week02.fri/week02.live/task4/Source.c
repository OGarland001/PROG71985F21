// prog71985 week02 - task4 - simple hello username (with name prompted)
// steveh - sept 2021

#include <stdio.h>

int main(void)
{
	char name[25];
	// asks your name 

	printf("please enter your name: ");
	scanf("%s", name);


	//then prints "Hello <name>" 
	printf("hello %s\n", name);



	return (0);
}