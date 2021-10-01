// string input
//
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-Jun-28			initial	
//      1.1       2021-June-1           reviewed and updated
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define STRLEN                80
#define SHORT_STRLEN    5

int main(void)
{
    char sentence[SHORT_STRLEN];  
    puts("Enter a string, please:");
    //int i = scanf("%s", sentence);  // this has a bit different consequence than we expected...

    //now set it to SHORT_STRLEN and see what happens with a very long first word
    // the fix:

    int i = scanf_s("%s", sentence, SHORT_STRLEN);

    printf("we read %i and your string is:\n", i);
    printf("%s\n", sentence);
    puts("Done.\n");

    char words[STRLEN];
    puts("Enter another string, please:");

    //gets(words);                                        //the wrong way (buffer overflow)
    fgets(words, STRLEN, stdin);              //the right way - truncating overflowing input

    printf("Your string:\n");
    printf("%s\n", words);
    puts("Done.");

    return 0;
}