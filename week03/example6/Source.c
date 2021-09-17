//
// Week 3 - example6
//		true and false
//
// PROG71985 - F21
// Professor SteveH - Sept 2021
//
// revision history
//		1.0		2020-May-28			initial
//      1.1      2021-May-27          reviewed and updated

#include <stdio.h>
int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);                    // true
    false_val = (10 == 2);                // false
    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}