#include "item.h"
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
	ITEM testItem = CreateItem(99);
	DisplayItem(testItem);

	PLISTNODE newNode = CreateNode(testItem);

	LIST myList = CreateList();

	if (!AddItemToList(&myList, testItem))
	{
		fprintf(stderr, "failed to add item to list\n");
	}

	for (int i = 98; i > 90; i--)
	{
		if (!AddItemToList(&myList, CreateItem(i)))
		{
			fprintf(stderr, "failed to add item to list\n");
		}
	}

	Display(myList);
	RemoveItemFromList(&myList, CreateItem(96));
	Display(myList);

	DisposeList(&myList);
	DisposeNode(newNode);
	DisposeItem(testItem);
}

