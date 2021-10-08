// prog71985

#include "Student.h"
#include "Professor.h"

int main(void)
{
// exercise our student ADT
	STUDENT bobby = CreateStudent("bobby h", 12345678);
	PrintStudent(bobby);

//exercise our professor ADT
	PROFESSOR steve = CreateProfessor("steve h", "BCS");
	PrintProfessor(steve);

	return 0;
}