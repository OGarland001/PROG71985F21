// prog71985 - our pretty awesome classroom model!
// steveh - over success week F21
//
// please review all the code.  make sure you understand it.  in fact, try to take your
// week06 code and turn it into this.
//
#pragma once
#include "Participant.h"
#include "ListADT.h"
#include <stdbool.h>

#define MAX_PARTICIPANTS	35					// this is awesome.  it is no longer a technical constraint, rather it is a business constraint
#define MAX_NAME				50
#define MAXBUFFER				80

typedef struct classroom {
	//int currentNumber;
	char name[MAX_NAME];
	//PARTICIPANT p[MAX_PARTICIPANTS];
	LIST participants;
} CLASSROOM;

CLASSROOM CreateClassroom(char[]);
int GetClassroomCapacity(CLASSROOM);
int GetClassroomCount(CLASSROOM);
bool AddParticipantToClassroom(CLASSROOM*, PARTICIPANT);
//PARTICIPANT GetParticipantByOrdinal(CLASSROOM, int);
void DisplayClassroom(CLASSROOM);
bool SaveClassroomToDisk(CLASSROOM, char*);
bool LoadClassroomFromDisk(CLASSROOM*, char*);