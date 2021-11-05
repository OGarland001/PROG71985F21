#include "item.h"
#include "listNode.h"
#include <stdio.h>
#include <stdlib.h>

// implementation of ListNode

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

PLISTNODE CreateNode(ITEM item)
{
	PLISTNODE newNode = (PLISTNODE)malloc(sizeof(LISTNODE));
	if (!newNode)
	{
		fprintf(stderr, "error allocating memory\n");
		exit(1);
	}
	newNode->nodeData = CopyItem(item);
	newNode->next = NULL;

	return newNode;
}

PLISTNODE GetNodeNextNode(PLISTNODE listNode)
{
	return listNode->next;
}

void SetNodeNextNode(PLISTNODE sourceListNode, PLISTNODE newNextNode)
{
	sourceListNode->next = newNextNode;
}

void DisposeNode(PLISTNODE listNode)
{
	DisposeItem(listNode->nodeData);
	free(listNode);
}
