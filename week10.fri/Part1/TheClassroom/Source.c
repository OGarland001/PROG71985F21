// our main test rig for our classroom.
// notice i/o (except file) is done at this level.  all our ADTs take (or give back) their i/o
// this allows us to move this model into a WIndows GUI, a Website, a mobile app, etc...
// steveh - success week f21

#include "Student.h"
#include "Professor.h"
#include "Participant.h"
#include "Classroom.h"
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	STUDENT jimmy = CreateStudent("jimminy cricket", 2000011234);
	PrintStudent(jimmy);

	//PROFESSOR steve = CreateProfessor("steve hendrikse", "Computer Science & Eng.");
	//PrintProfessor(steve);

	//PARTICIPANT p1 = CreateParticipantFromProfessor(steve);
	//PARTICIPANT p2 = CreateParticipantFromStudent(jimmy);

	//PrintParticipant(p1);
	//PrintParticipant(p2);


	//CLASSROOM c = CreateClassroom("PROG71985");
	//PrintClassroom(c);
	//printf("classroom capacity: %d\n", GetClassroomCapacity(c));
	//printf("current number of students: %d\n", GetClassroomCount(c));

	//printf("add prof.\n");
	//AddParticipantToClassroom(&c, p1);
	//printf("current number of students: %d\n", GetClassroomCount(c));

	//printf("add student\n");
	//AddParticipantToClassroom(&c, p2);
	//printf("current number of students: %d\n", GetClassroomCount(c));

	//printf("save classroom c\n");
	//if (!SaveClassroomToDisk(c, "datafile.txt"))
	//{
	//	fprintf(stderr, "Error saving to file\n");
	//	return 1;
	//}

	//printf("create classroom d and load from disk\n");
	//CLASSROOM d;
	//if (!LoadClassroomFromDisk(&d, "datafile.txt"))
	//{
	//	fprintf(stderr, "Error saving to file\n");
	//	return 1;
	//}

	//printf("print classroom d\n");
	//PrintClassroom(d);
	DisposeStudent(jimmy);
	return 0;
}