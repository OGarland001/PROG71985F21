// prog71985 - week6 - fleshing out the classroom

#include "Participant.h"
#include <string.h>


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

void DisplayParticipant(PARTICIPANT p)
{
	if (p.type == STUD)
		DisplayStudent(p.attendee.student);
	else if (p.type == PROF)
		DisplayProfessor(p.attendee.professor);
	else
		fprintf(stderr, "unknown type\n");
}


bool CompareParticipants(PARTICIPANT a, PARTICIPANT b)
{
	if (a.type != b.type)
		return false;

	if (a.type == STUD)
	{
		return CompareStudents(a.attendee.student, b.attendee.student);
	}
	else if (a.type == PROF)
	{
		return CompareProfessors(a.attendee.professor, b.attendee.professor);
	}
	else
		return false;
}

PARTICIPANT CopyParticipant(PARTICIPANT src)
{
	PARTICIPANT dst = { 0 };
	if (src.type == STUD)
	{
		STUDENT s = CopyStudent(src.attendee.student);
		dst = CreateParticipantFromStudent(s);
	}
	else if (src.type == PROF)
	{
		PROFESSOR p = CopyProfessor(src.attendee.professor);
		dst = CreateParticipantFromProfessor(p);
	}

	return dst;
}
// superceded by SaveClassroomToFile()
//bool SaveParticipantToFile(PARTICIPANT p, char* Filename[FILENAME_MAX])
//{
//	FILE* fp;
//	if ((fp = fopen(Filename, "w+")) == NULL)
//		return false;
//
//	StreamPrintParticipant(fp, p);
//
//	fclose(fp);
//	return true;
//}

void StreamPrintParticipant(FILE* fp, PARTICIPANT p)
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

PARTICIPANT StreamReadParticipantFromFile(FILE* fp)
{
	PARTICIPANT newParticipant;
	char buffer[MAXBUFFER];
	fgets(buffer, MAXBUFFER, fp);
	if (!strncmp(buffer, "STUD", 4))
	{
		STUDENT s = streamReadStudent(fp);
		newParticipant = CreateParticipantFromStudent(s);
	}
	if (!strncmp(buffer, "PROF", 4))
	{
		PROFESSOR p = streamReadProfessor(fp);
		newParticipant = CreateParticipantFromProfessor(p);
	}
	return newParticipant;
}
void DisposeParticipant(PARTICIPANT p)
{
	if (p.type == STUD)
		DisposeStudent(p.attendee.student);
	else if (p.type == PROF)
		DisposeProfessor(p.attendee.professor);
	else
		fprintf(stderr, "error disposing unknown type\n");

	//nothing else to be done.  (no malloc in the Participant layer)
}