// prog71985 - week05 first use of classrroom

#include "Student.h"
#include "Professor.h"
#include "Participant.h"
#include <stdio.h>

int main(void)
{
	STUDENT paulie = CreateStudent("paulie shore", 12345678);
	PrintStudent(paulie);
	PARTICIPANT p0 = CreateParticipantFromStudent(paulie);

	PROFESSOR steve = CreateProfessor("steve h", "bcs");
	PrintProfessor(steve);
	PARTICIPANT p1 = CreateParticipantFromProfessor(steve);

	SaveParticipantToFile(p1, "file.dat");

	return 0;
}