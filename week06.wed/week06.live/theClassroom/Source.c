// prog71985

#include "Student.h"
#include "Professor.h"
#include "Participant.h"

int main(void)
{
	// CLASSROOM prog71985 = CreateClassroom("prog prin");

// exercise our student ADT
	STUDENT bobby = CreateStudent("bobby h", 12345678);
	PrintStudent(bobby);

	PARTICIPANT p0 = CreateParticipantFromStudent(bobby);
	//AddParticipantToClassRoom(p0, prog71985)


//exercise our professor ADT
	PROFESSOR steve = CreateProfessor("steve h", "BCS");
	PARTICIPANT p1 = CreateParticipantFromProfessor(steve);
	SaveParticipantToFile(p1, "file.dat");

	PrintProfessor(steve);
	//AddParticipantToClassRoom(steve, prog71985)
	return 0;
}