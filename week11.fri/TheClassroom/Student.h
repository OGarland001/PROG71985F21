// prog71985 - week05 - initial student ADT header file
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

#define STUDENTLEN 50
#define MAXBUFFER				80

typedef struct student
{
	char name[STUDENTLEN];
	int studentnum;
} STUDENT;

STUDENT CreateStudent(char[], int);
void DisplayStudent(STUDENT);

int GetStudentNumberFromStudent(STUDENT);
bool CompareStudents(STUDENT, STUDENT);
STUDENT CopyStudent(STUDENT);

void streamPrintStudent(FILE*, STUDENT);
STUDENT streamReadStudent(FILE*);

void DisposeStudent(STUDENT);
