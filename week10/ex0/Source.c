#include <stdio.h>
#include "list.h"

// first use/example of a linked list.

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

int main()
{
	PLISTNODE list = NULL;


	AddItem(&list, 99);
	AddItem(&list, -1);
	AddItem(&list, 3);

	Display(list);

	RemoveItem(&list, 0);
	RemoveItem(&list, -1);
	RemoveItem(&list, 3);

	Display(list);
}

