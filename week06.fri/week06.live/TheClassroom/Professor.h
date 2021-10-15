//prog71985 week05 - create a professor ADT with attributes of name and department.
//steveh  - oct 2021        Operations should be to create and print professor.

#pragma once
#include <stdio.h>

#define PROFESSORLEN	50
#define DEPARTMENTLEN	50

typedef struct professor
{
	char name[PROFESSORLEN];
	char dept[DEPARTMENTLEN];
} PROFESSOR;

PROFESSOR CreateProfessor(char[], char[]);
void PrintProfessor(PROFESSOR);

void streamPrintProfessor(FILE*, PROFESSOR);
