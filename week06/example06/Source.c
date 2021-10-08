// using standard I/O
//
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-Jun-28			initial	
//      1.1      2021-Jun-1             reviewed and updated
//

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE      100

int main(int argc, char* argv[])
{
    unsigned char  buffer[BUFFERSIZE];       
    FILE* fpRead;
    FILE* fpWrite;

    if (argc != 3)          // ** I set command line parameters in project properties.
    {
        fprintf(stderr, "Usage: %s source destination\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fpRead = fopen(argv[1], "rb")) == NULL)                        // ** Open as binary!
    {
        fprintf(stderr, "Can't open %s for reading\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    if ((fpWrite = fopen(argv[2], "wb")) == NULL)                        // ** Open as binary!
    {
        fprintf(stderr, "Can't open %s for writing\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    int numItemsRead = 0;
    do
    {
        numItemsRead = fread(&buffer, sizeof(unsigned char), BUFFERSIZE, fpRead);
        fwrite(&buffer, sizeof(unsigned char), numItemsRead, fpWrite);
    } while (numItemsRead == BUFFERSIZE);

    fclose(fpRead);
    fclose(fpWrite);
}