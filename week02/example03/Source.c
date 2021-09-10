//
// An example #3
//		native data types and their sizes.
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-Apr-27			initial	
//      1.1       2021-May-15         reviewed/updated

#include <stdio.h>

int main(void)
{
    char e;
    short a;
    int f;
    float g;
    double h;
    long b;
    long long c;
    long double d;

    printf("size of char = %d bytes\n", sizeof(e));
    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of int = %d bytes\n", sizeof(f));
    printf("size of float = %d bytes\n", sizeof(g));
    printf("size of double = %d bytes\n", sizeof(h));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));
    return 0;
}