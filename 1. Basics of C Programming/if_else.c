#include <stdio.h>

int main()
{
    /*
    if (condition 1) {
        code runs if condition is true
    }
    else if (condition 2) {
        code runs if condition 1 false and condition 2 is true
    }
    else {
        code runs, if above if-statement is false
    }
    */

    if (5 < 6)
    {
        printf("first num is smaller than second num.\n");
    }
    else if (5 > 6)
    {
        printf("first num is greater than second num.\n");
    }
    else
    {
        printf("first num is equal to second num.");
    }

    return 0;
}