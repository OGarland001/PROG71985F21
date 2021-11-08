// prog71985 - our awesome participant model.  we use this to model a 'but in a seat'
// for physical access restrictions in rooms

#pragma once
#define _CRT_SECURE_NO_WARNINGS

// either a student or a professor (think max occupancy of a physical space)


//  A properly formatted .h and .c of a participant. 
//        A participant is a struct that contains:
//             a union of student or professor and 
//             a type (student or professor).  
//   Create functions for 
//       createParticipantFromProfessor(professor), 
//       createParticipantFromStudent(student), and 
//       printParticipant(participant)
//    and
//       SaveParticipantToFile(participant, filename)
#include "Student.h"
#include "Professor.h"
#include <stdbool.h>

#define MAXBUFFER				80

typedef  union attendee
{
	STUDENT student;
	PROFESSOR professor;
} ATTENDEE;

typedef enum AttendeeType { STUD, PROF } TYPE;

typedef struct participant
{
	TYPE type;							
	ATTENDEE attendee;
} PARTICIPANT;

PARTICIPANT CreateParticipantFromProfessor(PROFESSOR);
PARTICIPANT CreateParticipantFromStudent(STUDENT);
void PrintParticipant(PARTICIPANT);

void StreamPrintParticipant(FILE*, PARTICIPANT);
PARTICIPANT StreamReadParticipantFromFile(FILE*);