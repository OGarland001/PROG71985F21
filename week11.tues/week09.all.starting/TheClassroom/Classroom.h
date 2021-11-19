// prog71985 - our pretty awesome classroom model!
// steveh - over success week F21
//
// please review all the code.  make sure you understand it.  in fact, try to take your
// week06 code and turn it into this.
//
#pragma once
#include "Participant.h"
#include <stdbool.h>
#include "ListADT.h"

#define MAX_PARTICIPANTS	35
#define MAX_NAME				50
#define MAXBUFFER				80

typedef struct classroom {
	char name[MAX_NAME];
	LIST participants;
} CLASSROOM;

CLASSROOM CreateClassroom(char[]);
int GetClassroomCapacity(CLASSROOM);
int GetClassroomCount(CLASSROOM);
bool AddParticipantToClassroom(CLASSROOM*, PARTICIPANT);
void DisplayClassroom(CLASSROOM);
bool SaveClassroomToDisk(CLASSROOM, char*);
bool LoadClassroomFromDisk(CLASSROOM*, char*);
void DisposeClassroom(CLASSROOM*);
