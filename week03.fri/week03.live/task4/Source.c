// prog71985 week02 - task4 - simple hello username (with name prompted)
// steveh - sept 2021

//#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXNAME		50    //type is r-value (and it is copy/replaced in code pre-processor

int main(void)
{
	//const int MAXSIZE = 50;   //type is l-value (even as a constant)

	char name[MAXNAME]; 

	// asks your name 
	printf("please enter your name: ");
	scanf_s("%s", name, MAXNAME);    

	//then prints "Hello <name>" 
	printf("hello %s\n", name);



	return (0);
}