#pragma once
#include <stdbool.h>

//declaration/definition of "item"

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//
typedef struct item
{
	int data;
}STUDENT, * PITEM;

STUDENT CreateStudent(int);

STUDENT CopyStudent(STUDENT);

bool CompareStudents(STUDENT, STUDENT);

void PrintStudent(STUDENT);

void DisposeStudent(STUDENT);
