#include "Student.h"
#include "Professor.h"
#include "Participant.h"
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	STUDENT steve = CreateStudent("steve h\n", 12345678);
	PrintStudent(steve);
	PARTICIPANT p0 = CreateParticipantFromStudent(steve);
	if (!SaveParticipantToFile(p0, "file.dat"))
	{
		fprintf(stderr, "errors saving file to disk\n");
		exit(1);
	}

	STUDENT  sally = CreateStudent("sally", 23456789);
	PrintStudent(sally);
	PARTICIPANT p1 = CreateParticipantFromStudent(sally);

	PROFESSOR dave = CreateProfessor("David A\n", "CS");  //added \n to name as test
	PrintProfessor(dave);
	PARTICIPANT p2 = CreateParticipantFromProfessor(dave);


	return 0;
}