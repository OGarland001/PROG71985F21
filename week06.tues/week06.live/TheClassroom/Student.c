// prog71985 - week05 - initial student ADT implementation
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#include "student.h"
#include "CleanInput.h"
#include <stdio.h>
#include <string.h>

/// <summary>
/// function to create properly formatted student ADT
/// </summary>
/// <param name="Name"></param>
/// <param name="StudentNum"></param>
/// <returns>a STUDENT</returns>
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
