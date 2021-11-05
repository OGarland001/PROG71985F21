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
}ITEM, * PITEM;

ITEM CreateItem(int);

ITEM CopyItem(ITEM);

bool CompareItems(ITEM, ITEM);

void DisplayItem(ITEM);

void DisposeItem(ITEM);
