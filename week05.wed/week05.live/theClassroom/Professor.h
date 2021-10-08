//prog71985  - week05  - create a professor ADT with attributes of name and department.
//                                      Operations should be to create and print professor.

#pragma once

#define PROFESSORLEN	50
#define DEPARTMENTLEN 50

typedef struct professor 
{
	char name[PROFESSORLEN];
	char dept[DEPARTMENTLEN];
} PROFESSOR;

PROFESSOR CreateProfessor(char[], char[]);
void PrintProfessor(PROFESSOR);

