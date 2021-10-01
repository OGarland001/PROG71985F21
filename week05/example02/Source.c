//arrays:  pass by value (NOT)   ==> pass by reference.

// PROG71985 F21 - Professor SteveH - Jun 2021

// revision history
//		1.0	   2020-June-10			initial
//      1.1     2021-June-1             reviewed and updated



#include <stdio.h>
#define MONTHS 12

// form 1
void displayArray(int[]);  

//form 2
void displayArrayByPointer(int*);   


int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	displayArray(days);
	displayArray(days);
	displayArrayByPointer(days);

	displayArray(days);

	return 0;
}

void displayArray(int days[])
{
	int index;

	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);

	days[1] = 29;
}

void displayArrayByPointer(int* days)
{
	int index;

	for (index = 0; index < MONTHS; index++)
		printf("Month %2d has %d days.\n", index + 1,
			*(days + index));   // same as days[index]

	*(days + 1) = 28;
}