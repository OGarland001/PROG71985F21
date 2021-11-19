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
#ifdef  _MSC_VER
	strncpy_s(p.name, PROFESSORLEN, Name, PROFESSORLEN);
#else
	strncpy(p.name, Name, PROFESSORLEN);
#endif
	RemoveBadChars(p.name);

#ifdef  _MSC_VER
	strncpy_s(p.dept, DEPARTMENTLEN, Dept, DEPARTMENTLEN);
#else
	strncpy(p.dept, Dept, DEPARTMENTLEN);
#endif
	RemoveBadChars(p.dept);

	return p;
}

void DisplayProfessor(PROFESSOR p)
{
	printf("Professor: %s, %s\n", p.name, p.dept);
}

PROFESSOR CopyProfessor(PROFESSOR p)
{
	return CreateProfessor(p.name, p.dept);
}

void streamPrintProfessor(FILE* fp, PROFESSOR p)
{
	fprintf(fp, "%s\n", p.name);
	fprintf(fp, "%s\n", p.dept);
}

PROFESSOR streamReadProfessor(FILE* fp)
{
	char nameBuffer[MAXBUFFER];
	char deptBuffer[MAXBUFFER];
	fgets(nameBuffer, MAXBUFFER, fp);
	fgets(deptBuffer, MAXBUFFER, fp);
	PROFESSOR p = CreateProfessor(nameBuffer, deptBuffer);
	return p;
}

char* GetNameFromProfessor(PROFESSOR p)
{
	return p.name;
}

bool CompareProfessors(PROFESSOR a, PROFESSOR b)
{
	return (strncmp(GetNameFromProfessor(a), GetNameFromProfessor(b), (int)strlen(GetNameFromProfessor(a))));
}

void DisposeProfessor(PROFESSOR p)
{
	// nothing to be done here (no malloc at the professor layer)
}