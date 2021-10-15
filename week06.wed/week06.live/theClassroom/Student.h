// prog71985 - week05 - initial write of student header 
// steveh - oct '21

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

void streamPrintStudent(FILE* , STUDENT);