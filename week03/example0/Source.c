//
// Week 3 - example0
//		using while for looping
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-May-28			initial
//      1.1     2021-May-26         version updates

#include <stdio.h>
#define ADJUST 7.31              // one kind of symbolic constant

int main(void)
{
    const double SCALE = 0.333;  // another kind of symbolic constant
    double shoe, foot;

    printf("Shoe size (men's)\tfoot length\n");
    shoe = 3.0;
    while (shoe < 18.5)     
    {                       
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f\t%15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }                        
    printf("If the shoe fits, wear it.\n");

    return 0;
}
