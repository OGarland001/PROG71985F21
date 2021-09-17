//
// Week 3 - example13
//		conditional operator
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated


//	scanf_s is only available in MS compiler
//  in order to use "scanf" (to increase universal nature of this source code), uncomment this next line:
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define COVERAGE 350       // square feet per paint can
int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans,
            cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit):\n");
    }

    return 0;
}