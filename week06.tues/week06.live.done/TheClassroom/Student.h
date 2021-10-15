// prog71985 - week05 - initial student ADT header file
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#pragma once
#include <stdio.h>

#define STUDENTLEN 50

typedef struct student
{
	char name[STUDENTLEN];
	int studentnum;
} STUDENT;

STUDENT CreateStudent(char[], int);
void PrintStudent(STUDENT);

void streamPrintStudent(FILE*, STUDENT);

