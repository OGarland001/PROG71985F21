// prog71985 week06 continuing the classroom

#include "Participant.h"
#include "Student.h"
#include "Professor.h"
#include <stdio.h>

void streamPrintParticipant(FILE*, PARTICIPANT);

/// <summary>
/// create a participant from a fully formed professor
/// </summary>
/// <param name="Professor"></param>
/// <returns></returns>
PARTICIPANT CreateParticipantFromProfessor(PROFESSOR Professor)
{
	PARTICIPANT p;
	p.type = PROF;
	p.attendee.professor = Professor;
	return p;
}

/// <summary>
///  creates a participant from a fully formed student
/// </summary>
/// <param name="Student">must be a valid student</param>
/// <returns></returns>
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
		fprintf(stderr, "error:  unknown participant type\n");
}

bool SaveParticipantToFile(PARTICIPANT P, char Filename[FILENAME_MAX])
{
	FILE* fp;
	if ((fp = fopen(Filename, "w+")) == NULL)
		return false;

	streamPrintParticipant(fp, P);

	fclose(fp);
	return true;
}

void 	streamPrintParticipant(FILE* fp, PARTICIPANT p)
{
	if (p.type == STUD)
	{
		fprintf(fp, "STUD\n");
		streamPrintStudent(fp, p.attendee.student);
	}

	else if (p.type == PROF)
		streamPrintProfessor(fp, p.attendee.professor);
	else
		fprintf(stderr, "error:  unknown participant type cannot be saved\n");
}