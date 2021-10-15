// prog71985 - week05 - initial write of student header 
// steveh - oct '21

#include "student.h"
#include "CleanInput.h"
#include <stdio.h>
#include <string.h>

STUDENT CreateStudent(char Name[], int StudentNum)
{
	STUDENT s;
	strncpy_s(s.name, STUDENTLEN, Name, STUDENTLEN);
	RemoveBadChars(s.name);
	s.studentnum = StudentNum;

	return s;
}

void PrintStudent(STUDENT s)
{
	printf("Student: %s, %d\n", s.name, s.studentnum);
}

void streamPrintStudent(FILE* fp, STUDENT s)
{
	fprintf(fp, "%s\n", s.name);
	fprintf(fp, "%d\n", s.studentnum);
}


