// prog71985 - our classroom implementation.  notice it only deals with data objects at
// the classroom level.  It sends all other data accesses down to the proper layer.
// steveh - success week f21
#include "Classroom.h"
#include <stdio.h>
#include <string.h>

/// <summary>
/// this function creates a new classroom ADT and populates name and resets currentNumber
/// coded by steve
/// reviewed by bob
/// 20-oct-2020 - prog71985f20
/// </summary>
/// <param name="name"></param>
/// <returns>well formulated CLASSROOM</returns>
CLASSROOM CreateClassroom(char name[])
{
	CLASSROOM c;
#ifdef  _MSC_VER
	strncpy_s(c.name, MAX_NAME, name, MAX_NAME);
#else
	strncpy(c.name, name, MAX_NAME);
#endif

	c.currentNumber = 0;
	return c;
}

int GetClassroomCapacity(CLASSROOM c)
{
	return MAX_PARTICIPANTS;
}

int GetClassroomCount(CLASSROOM c)
{
	return c.currentNumber;
}

/// <summary>
/// needs refactoring.
/// </summary>
/// <param name="c"></param>
/// <param name="p"></param>
/// <returns></returns>
bool AddParticipantToClassroom(CLASSROOM* c, PARTICIPANT p)
{
	if (c->currentNumber >= MAX_PARTICIPANTS)
		return false;
	else
	{
		c->p[c->currentNumber++] = p;  //reference the current number participant in classroom and post increment count of participants
		return true;
	}
}

PARTICIPANT GetParticipantByOrdinal(CLASSROOM c, int n)
{
	return c.p[n];
}

void PrintClassroom(CLASSROOM c)
{
	printf("Classroom name: %s\n", c.name);
	printf("Classroom has %d students of a maximum of %d\n", c.currentNumber, MAX_PARTICIPANTS);
	for (int i = 0; i < c.currentNumber; i++)
	{
		PARTICIPANT p = GetParticipantByOrdinal(c, i);
		PrintParticipant(p);
	}
}

bool SaveClassroomToDisk(CLASSROOM c, char* filename)
{
	FILE* fp;
	if ((fp = fopen(filename, "w+")) == NULL)
		return false;

	fprintf(fp, "%s\n", c.name);
	fprintf(fp, "%d\n", c.currentNumber);
	for (int i = 0; i < c.currentNumber; i++)
	{
		StreamPrintParticipant(fp, c.p[i]);
	}
	fclose(fp);
	return true;
}

bool LoadClassroomFromDisk(CLASSROOM* c, char* filename)
{
	FILE* fp;
	if ((fp = fopen(filename, "r")) == NULL)
		return false;

	char buffer[MAXBUFFER];
	fscanf(fp, "%[^\n]s\n", buffer);
#ifdef  _MSC_VER
	strncpy_s(c->name, MAX_NAME, buffer, MAX_NAME);
#else
	strncpy(c->name, buffer, MAX_NAME);
#endif

	c->currentNumber = 0;

	int participantCount;
	fscanf(fp, "%d\n", &participantCount);
	for (int i = 0; i < participantCount; i++)
	{
		PARTICIPANT p = StreamReadParticipantFromFile(fp);
		AddParticipantToClassroom(c, p);
	}
	fclose(fp);
	return true;
}