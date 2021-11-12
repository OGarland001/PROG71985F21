#include "item.h"
#include <stdio.h>
#include <stdbool.h>

// implementation of "item"

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

STUDENT CreateStudent(int i)
{
	STUDENT item;
	item.data = i;
	return item;
}

STUDENT CopyStudent(STUDENT item)
{
	STUDENT copy;
	copy.data = item.data;
	return copy;
}

bool CompareStudents(STUDENT itemA, STUDENT itemB)
{
	if (itemA.data == itemB.data)
		return true;
	else
		return false;
}

void PrintStudent(STUDENT item)
{
	printf("item data: %d\n", item.data);
}

void DisposeStudent(STUDENT item)
{
	//free(item); <-- no malloc, no free!
	return;
}
