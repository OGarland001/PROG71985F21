// prog71985 - inpl of professor


#include "Professor.h"


PROFESSOR CreateProfessor(char Name[], char Dept[])
{
	PROFESSOR p;
	strncpy_s(p.name, PROFESSORLEN, Name, PROFESSORLEN);
	strncpy_s(p.dept, DEPARTMENTLEN, Dept, DEPARTMENTLEN);
	return p;
}

void PrintProfessor(PROFESSOR p)
{

}