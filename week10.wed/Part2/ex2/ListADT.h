#pragma once
#include "Student.h"
#include "listNode.h"
#include <stdbool.h>

// declaration/definition of List ADT

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

typedef struct ListADT
{
	PLISTNODE list;
}LIST, *PLIST;

LIST CreateList();
bool AddStudentToList(PLIST, STUDENT);
void RemoveStudentFromList(PLIST, STUDENT);

void Display(LIST);

void DisposeList(PLIST);


