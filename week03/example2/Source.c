//
// Week 3 - example2
//		conversion of seconds to minutes:seconds (using modulus)
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated
// 
//	scanf_s is only available in MS compiler
//  in order to use "scanf" (to increase universal nature of this source code), uncomment this next line:
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

#define SECONDS_PER_MINUTE 60           

int main(void)
{
    int seconds, wholeMinutes, remainderSeconds;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (0 to quit):\n");
    scanf("%d", &seconds);            
    while (seconds > 0)
    {
        wholeMinutes = seconds / SECONDS_PER_MINUTE;  // truncated number of minutes
        remainderSeconds = seconds % SECONDS_PER_MINUTE; // number of seconds left over
        printf("%d seconds is %d minutes, %d seconds.\n", 
            seconds, 
            wholeMinutes, 
            remainderSeconds);
        printf("Enter next value (0 to quit):\n");
        scanf("%d", &seconds);
    }
    printf("Done!\n");

    return 0;
}