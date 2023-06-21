#include <stdio.h>

int main()
{
    /*
    for (statement 1; statement 2; statement 3)
    {
        code to be run
    }

    statement 1: initialization statement ran before the loop begins; controls loop variable
    statement 2: condition for executing code block
    statement 3: executed everytime code block has been executed
    */

   // code to print nums from 1 to 5
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("\nCurrent number: %d\n", i);
    }
}