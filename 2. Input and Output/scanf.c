#include <stdio.h>

int main()
{
    /*
    syntax of scanf:

    scanf("%format_specifier", &assigning_value_to_variable)
    */

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d", age);
}