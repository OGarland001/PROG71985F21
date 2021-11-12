#include "Student.h"
#include "listNode.h"
#include "ListADT.h"

#include <stdio.h>

// use of List ADT

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

// let's update it and create a list of students!


int main(void)
{
	STUDENT testStudent = CreateStudent("steveh", 99);
	PrintStudent(testStudent);

	// out of place  (should be hidden)
	PLISTNODE newNode = CreateNode(testStudent);

	LIST myList = CreateList();

	if (!AddStudentToList(&myList, testStudent))
	{
		fprintf(stderr, "failed to add item to list\n");
	}


	if (!AddStudentToList(&myList, CreateStudent("steveh", 98)))
	{
		fprintf(stderr, "failed to add item to list\n");
	}


	Display(myList);
	RemoveStudentFromList(&myList, CreateStudent("steve", 98));
	Display(myList);

	DisposeList(&myList);
	DisposeNode(newNode);
	DisposeStudent(testStudent);
}

