#include "participant.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void streamPrintParticipant(FILE*, PARTICIPANT);

PARTICIPANT CreateParticipantFromProfessor(PROFESSOR newProf)
{
	PARTICIPANT p;
	p.type = PROF;
	p.attendee.professor = newProf;
	return p;
}

PARTICIPANT CreateParticipantFromStudent(STUDENT newStudent)
{
	PARTICIPANT p;
	p.type = STUD;
	p.attendee.student = newStudent;
	return p;
}

void PrintParticipant(PARTICIPANT p)
{
	if (p.type == STUD)
		PrintStudent(p.attendee.student);
	else if (p.type == PROF)
		PrintProfessor(p.attendee.professor);
	else
		printf("unknown participant type\n");
}

bool SaveParticipantToFile(PARTICIPANT p, char filename[FILENAME_MAX])
{
	FILE* fp;
	if ((fp = fopen(filename, "w+")) == NULL)
		return false;

	streamPrintParticipant(fp, p);

	fclose(fp);
	return true;
}

void streamPrintParticipant(FILE* fp, PARTICIPANT p)
{
	if (p.type == STUD)
		streamPrintStudent(fp, p.attendee.student);
	else if (p.type == PROF)
		streamPrintProfessor(fp, p.attendee.professor);
	else
		printf("unknown participant type\n");
}