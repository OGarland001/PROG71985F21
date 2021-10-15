// prog71985 - week6 - fleshing out the classroom

#include "Participant.h"

void streamPrintParticipant(FILE*, PARTICIPANT);

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
	if (p.type == STUD)
		PrintStudent(p.attendee.student);
	else if (p.type == PROF)
		PrintProfessor(p.attendee.professor);
	else
		fprintf(stderr, "unknown type\n");
}

bool SaveParticipantToFile(PARTICIPANT p, char Filename[FILENAME_MAX])
{
	FILE* fp;
	if ((fp = fopen(Filename, "w+")) == NULL)
		return false;

	streamPrintParticipant(fp, p);

	fclose(fp);
	return true;
}

void streamPrintParticipant(FILE* fp, PARTICIPANT p)
{
	if (p.type == STUD)
	{
		fprintf(fp, "STUD\n");
		streamPrintStudent(fp, p.attendee.student);
	}
	else if (p.type == PROF)
	{
		fprintf(fp, "PROF\n");
		streamPrintProfessor(fp, p.attendee.professor);
	}
	else
		fprintf(stderr, "error saving unknown type\n");
}
