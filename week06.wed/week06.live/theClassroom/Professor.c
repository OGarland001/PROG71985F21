// prog71985 - inpl of professor


#include "Professor.h"
#include "CleanInput.h"
#include <string.h>

PROFESSOR CreateProfessor(char Name[], char Dept[])
{
	PROFESSOR p;
	strncpy_s(p.name, PROFESSORLEN, Name, PROFESSORLEN);
	RemoveBadChars(p.name);
	strncpy_s(p.dept, DEPARTMENTLEN, Dept, DEPARTMENTLEN);
	RemoveBadChars(p.dept);
	return p;
}

void PrintProfessor(PROFESSOR p)
{
	printf("Professor: %s, %s\n", p.name, p.dept);
}