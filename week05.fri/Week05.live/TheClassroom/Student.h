// prog71985 f21 - week05 - initial define of student class
// steveh - oct 2021

#pragma once

#define STUDENTLEN 50

typedef struct student
{
	char name[STUDENTLEN];
	int studentnum;
} STUDENT;

STUDENT CreateStudent(char[], int);
void PrintStudent(STUDENT);