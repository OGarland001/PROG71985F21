#pragma once


// a person involved with the class - aka a professor or student.


//	A properly formatted .h and .c of a participant. 
//        A participant is a struct that contains:
//             a union of student or professor and 
//             a type (student or professor).  
//  Create functions for 
//       CreateParticipantFromProfessor(professor), 
//       CreateParticipantFromStudent(student), and 
//       PrintParticipant(participant)
//    and
//       SaveParticipantToFile(PARTICIPANT, char[]);

#include "Student.h"
#include "Professor.h"
#include <stdio.h>
#include <stdbool.h>

typedef union attendee
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

bool SaveParticipantToFile(PARTICIPANT, char[]);