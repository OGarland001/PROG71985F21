// prog71985 - week05 - initial student ADT header file
// steveh - oct '21
// version history
// 1.0		5-oct	initial
//
// week09 changes:
//     instead of stack based storage, we wish to have heap (free-store) based storage
//			why?  stack limited to 1MB (https://docs.microsoft.com/en-us/cpp/build/reference/stack-stack-allocations?view=msvc-160)
//		so:
//		1) change char[] to char*
//		2) refactor the functions
//		3) implement RemoveStudent(STUDENT) to free allocated memory


#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STUDENTLEN				50
#define MAXBUFFER				80

typedef struct student
{
	char* name;  // an address  (4 bytes)
	int studentnum;  //are also 4 bytes.
} STUDENT;

STUDENT CreateStudent(char[], int);
void PrintStudent(STUDENT);
void RemoveStudent(STUDENT);

void streamPrintStudent(FILE*, STUDENT);
STUDENT streamReadStudent(FILE*);
