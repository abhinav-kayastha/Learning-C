#include <stdio.h>

int main()
{

    /*
    variable = Allocated space in the memory to store
               a value.

    We need to declare what kind of data we are storing:
    int for integers, float for floating point numbers,
    char for single characters, char x[] for an array of
    characters
    */

    int x;       // declaration
    x = 123;     // initialization
    int y = 321; // declaration and initialization

    int age = 21;        // integer
    float gpa = 2.05;    // floating point number
    char grade = 'C';    // stores single character
    char name[] = "Bro"; // array of characters

    printf("Your name is %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c", grade);
    printf("Your GPA is %f", gpa);
}