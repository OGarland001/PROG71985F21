#include "Student.h"
#include "Professor.h"
#include <stdio.h>


int main(void)
{
	STUDENT steve = CreateStudent("steve h\n", 12345678);
	PrintStudent(steve);

	STUDENT  sally = CreateStudent("sally", 23456789);
	PrintStudent(sally);

	PROFESSOR dave = CreateProfessor("David A\n", "CS");  //added \n to name as test
	PrintProfessor(dave);

	return 0;
}