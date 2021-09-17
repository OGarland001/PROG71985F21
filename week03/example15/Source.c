//
// Week 3 - example15
//		using break
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
int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");

    return 0;
}