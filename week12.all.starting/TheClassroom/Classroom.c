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
	c.participants = CreateList();
	return c;
}

int GetClassroomCapacity(CLASSROOM c)
{
	return MAX_PARTICIPANTS;
}

int GetClassroomCount(CLASSROOM c)
{
	return GetCountOfParticipantsFromList(c.participants);
}

bool AddParticipantToClassroom(CLASSROOM* c, PARTICIPANT p)
{
	if (GetCountOfParticipantsFromList(c->participants) >= MAX_PARTICIPANTS)
		return false;
	else
		return (AddParticipantToList(&(c->participants), p));
}

void DisplayClassroom(CLASSROOM c)
{
	printf("Classroom name: %s\n", c.name);
	printf("Classroom has %d students of a maximum of %d\n", GetCountOfParticipantsFromList(c.participants), MAX_PARTICIPANTS);
	Display(c.participants);
}

bool SaveClassroomToDisk(CLASSROOM c, char* filename)
{
	FILE* fp;
	if ((fp = fopen(filename, "w+")) == NULL)
		return false;

	fprintf(fp, "%s\n", c.name);
	fprintf(fp, "%d\n", GetCountOfParticipantsFromList(c.participants));
	StreamDisplay(c.participants, fp);
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

	// loadClassroom doesn't have the steps of CreateClassroom, so we do it manually
	c->participants = CreateList();

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

void DisposeClassroom(CLASSROOM *c)
{
	DisposeList(&(c->participants));
}
