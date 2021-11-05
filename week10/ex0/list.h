#pragma once
#include <stdio.h>
#include <stdlib.h>

// declaration/definition of list

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

typedef struct listnode
{
	int info;
	struct listnode* next;
}LISTNODE, *PLISTNODE;

void Display(PLISTNODE);

void AddItem(PLISTNODE* , int);
void RemoveItem(PLISTNODE* , int);

