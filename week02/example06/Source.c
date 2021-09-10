//
// An example #6
//		listing 3.10 from the text
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-Apr-28			initial	
//     1.1       2021-May-15          reviewed/updated

//	scanf_s is only available in MS compiler
//  in order to use "scanf" (to increase universal nature of this source code), uncomment this next line:
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:");                                                     /* \a sounds a bell */
    printf(" $_______\b\b\b\b\b\b\b");                                                                          /* \b is a backspace */
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary,  salary * 12.0);                     /* \n is newline and \t is tab */
    printf("\rGee!\n");                                                                                                 /* \r is 'return to start of line' */

    return 0;
}