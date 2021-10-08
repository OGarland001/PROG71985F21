// prog71985 - week05 - initial professor ADT header file
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#pragma once

#define PROFESSORLEN 50
#define DEPARTMENTLEN	50

typedef struct professor
{
	char name[PROFESSORLEN];
	char dept[DEPARTMENTLEN];
} PROFESSOR;

PROFESSOR CreateProfessor(char[], char[]);
void PrintProfessor(PROFESSOR);

