// prog71985 - week06 - initial implementation of professor adt


#include "Professor.h"
#include "CleanInput.h"
#include <stdio.h>
#include <string.h>

/// <summary>
/// creates a properly formed professor adt
/// </summary>
/// <param name="Name">the professor name</param>
/// <param name="Dept">the professor's department</param>
/// <returns></returns>
PROFESSOR CreateProfessor(char Name[], char Dept[])
{
	PROFESSOR p;
	strncpy_s(p.name, PROFESSORLEN, Name, PROFESSORLEN);
	RemoveBadChars(p.name);
	strncpy_s(p.dept, DEPARTMENTLEN, Dept, DEPARTMENTLEN);
	RemoveBadChars(p.dept);
	return p;
}

/// <summary>
/// displays properly formed professor adt to the screen
/// </summary>
/// <param name="p">properly formed professor adt</param>
void PrintProfessor(PROFESSOR p)
{
	printf("Professor: %s, %s\n", p.name, p.dept);
}

void streamPrintProfessor(FILE* fp, PROFESSOR p)
{
	fprintf(fp, "%s\n", p.name);
	fprintf(fp, "%s\n", p.dept);
}