#include <stdio.h>

int main()
{
    char name[25]; // initializing variables
    int age;

    printf("Enter your name: ");
    scanf("%s", &name); // reading user input and
                        // and relaying input to
                        // variable name

    printf("Enter your age: ");
    scanf("%d", &age); // same as above but for var. age

    // showing user info

    printf("Your name is %s", name);
    printf(", and you are %d years old.", age);

    // returning 0
    return 0;
}