// prog71985 - week05 - initial professor ADT header file
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#pragma once
#include <stdio.h>

#define PROFESSORLEN 50
#define DEPARTMENTLEN	50
#define MAXBUFFER				80

typedef struct professor
{
	char name[PROFESSORLEN];
	char dept[DEPARTMENTLEN];
} PROFESSOR;

PROFESSOR CreateProfessor(char[], char[]);
void PrintProfessor(PROFESSOR);
void streamPrintProfessor(FILE*, PROFESSOR);
PROFESSOR streamReadProfessor(FILE*);