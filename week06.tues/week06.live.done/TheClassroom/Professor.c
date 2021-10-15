// prog71985 - week05 - initial professor ADT implementation
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#include "Professor.h"
#include "CleanInput.h"
#include <stdio.h>
#include <string.h>

/// <summary>
/// create a professor object (with good data within)
/// </summary>
/// <param name="Name"></param>
/// <param name="Dept"></param>
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

void PrintProfessor(PROFESSOR p)
{
	printf("Professor: %s, %s\n", p.name, p.dept);
}

void streamPrintProfessor(FILE* fp, PROFESSOR p)
{
	fprintf(fp, "PROF\n");
	fprintf(fp, "%s\n", p.name);
	fprintf(fp, "%s\n", p.dept);
}