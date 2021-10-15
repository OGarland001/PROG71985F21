#include "Participant.h"
#include <stdio.h>

void 	streamPrintParticipant(FILE*, PARTICIPANT);

PARTICIPANT CreateParticipantFromProfessor(PROFESSOR Professor)
{
	PARTICIPANT p;
	p.type = PROF;
	p.attendee.professor = Professor;
	return p;
}

PARTICIPANT CreateParticipantFromStudent(STUDENT Student)
{
	PARTICIPANT p;
	p.type = STUD;
	p.attendee.student = Student;
	return p;
}

void PrintParticipant(PARTICIPANT p)
{
	if (p.type == PROF)
		PrintProfessor(p.attendee.professor);
	else if (p.type == STUD)
		PrintStudent(p.attendee.student);
	else
		fprintf(stderr, "error: unknown participant type\n");
}

bool SaveParticipantToFile(PARTICIPANT p, char Filename[])
{
	FILE* fp;
	if ((fp = fopen(Filename, "w+")) == NULL)
	{
		fprintf(stderr, "file failed to open\n");
		return false;
	}

	streamPrintParticipant(fp, p);

	fclose(fp);
	return true;
}

void 	streamPrintParticipant(FILE* fp, PARTICIPANT p)
{
	if (p.type == PROF)
	{
		fprintf(fp, "PROF\n");
		streamPrintProfessor(fp, p.attendee.professor);
	}
	else if (p.type == STUD)
	{
		fprintf(fp, "STUD\n");
		streamPrintStudent(fp, p.attendee.student);
	}
	else
		fprintf(stderr, "error: unknown participant type\n");
}