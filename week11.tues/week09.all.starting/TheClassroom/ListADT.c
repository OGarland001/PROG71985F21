#include "ListADT.h"
#include "Participant.h"
#include <stdlib.h>

// implementation of list ADT

// PROG71985F21 - Nov 2021 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//

LIST CreateList()
{
	LIST newlist = { 0 };
	return newlist;
}

bool AddParticipantToList(PLIST thisList, PARTICIPANT thisParticipant)
{
	PLISTNODE newNode = CreateNode(thisParticipant);
	if (newNode == NULL)
		return false;

	if (thisList->list == NULL)  //empty list.  
	{
		SetNodeNextNode(newNode, thisList->list);
		thisList->list = newNode;
	}
	else
	{
		PLISTNODE current = thisList->list;

		while (GetNodeNextNode(current) != NULL)
		{
			current = GetNodeNextNode(current);
		}

		SetNodeNextNode(current, newNode);
	}
	return true;
}

void RemoveParticipantFromList(PLIST thisList, PARTICIPANT participantToBeDeleted)
{
	PLISTNODE current = thisList->list;

	if (CompareParticipants(current->nodeData, participantToBeDeleted))
	{
		if (GetNodeNextNode(current) != NULL)  //info is in head.  and list is greater than 1 element
			thisList->list = GetNodeNextNode(current);
		else   //i think that this is what should happen if there is only the single element (and we delete it)
			thisList->list = NULL;

		DisposeNode(current);
		return;
	}
	PLISTNODE prev = NULL;  // we will need the previous node for to link over the deleted one
	while (current != NULL && !CompareParticipants(current->nodeData, participantToBeDeleted))
	{
		prev = current;
		current = GetNodeNextNode(current);
	}

	if (current == NULL)
		return;  //wasn't found - and we hit the end

	SetNodeNextNode(prev, GetNodeNextNode(current));  //unlink the node from the list

	DisposeNode(current);  // Free memory 
}

int GetCountOfParticipantsFromList(LIST thisList)
{
	int count = 0;

	if (thisList.list == NULL)
		return count;
	else
	{
		PLISTNODE current = thisList.list;
		do
		{
			count++;
			current = GetNodeNextNode(current);
		} while (current != NULL);
	}
	return count;
}

void Display(LIST thisList)
{
	if (thisList.list == NULL)
		return;
	else
	{
		PLISTNODE current = thisList.list;
		do
		{
			DisplayParticipant(current->nodeData);
			current = GetNodeNextNode(current);
		} while (current != NULL);
	}
}

void StreamDisplay(LIST thisList, FILE* fp)
{
	if (thisList.list == NULL)
		return;
	else
	{
		PLISTNODE current = thisList.list;
		do
		{
			StreamPrintParticipant(fp, current->nodeData);
			current = GetNodeNextNode(current);
		} while (current != NULL);
	}
}


void DisposeList(PLIST thisList)
{
	PLISTNODE tmp;

	PLISTNODE current = thisList->list;
	while(current != NULL)
	{
		tmp = current;
		current = GetNodeNextNode(current);
		DisposeNode(tmp);
	} 
}
