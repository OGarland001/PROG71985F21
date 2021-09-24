// week02 task4 - simple personalized greeting
// steveh  - prog71985-f21

// Version history
// 
// 1.0	week03		completed, debugged
// 
//  0.1	week02		initial write, runtime error at scanf

//#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


#define MAXNAME			20			//preprocessor (search and replace)

int main(void)
{

	// ask for my name
	printf("please enter your name: ");

	char name[MAXNAME];
	scanf_s("%s", name, MAXNAME);

	//print my name
	printf("\nhello %s\n", name);

	return(0);
}