#include <stdio.h>

int main()
{
    /*
    + = add
    - = subtract
    * = multiply
    / = divide
    % = modulus, calculates remainder after division
    */

    int age = 4;

    printf("Age: %d\n", age);

    int new_age = age + 6;

    printf("New age: %d\n", new_age);

    age = new_age * 4;

    printf("Age: %d\n", age);

    new_age += 9; // adds 9 to new_age and updates its value by the summation

    printf("New age: %d", new_age);

    return 0;
}