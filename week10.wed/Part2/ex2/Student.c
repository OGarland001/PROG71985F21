// prog71985 - week05 - initial student ADT implementation
// steveh - oct '21
// version history
// 1.0		5-oct	initial

#include "Student.h"
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
#ifdef  _MSC_VER
	strncpy_s(s.name, STUDENTLEN, Name, STUDENTLEN);
#else
	strncpy(s.name, Name, STUDENTLEN);
#endif
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

STUDENT streamReadStudent(FILE* fp)
{
	char nameBuffer[MAXBUFFER];
	int studentNumber;
	fgets(nameBuffer, MAXBUFFER, fp);
	fscanf(fp, "%d\n", &studentNumber);
	STUDENT s = CreateStudent(nameBuffer, studentNumber);
	return s;
}

bool CompareStudents(STUDENT a, STUDENT b)
{
	if (a.studentnum == b.studentnum)
		return true;
	else
		return false;
}


/// <summary>
/// take an existing student instance and create a new one with the same values.
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
STUDENT CopyStudent(STUDENT s)
{
	return(CreateStudent(s.name, s.studentnum));
}

void DisposeStudent(STUDENT s)
{
	;
}