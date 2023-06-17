#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter an integer: ");

    scanf("%d", &num1);

    printf("Enter another integer: ");

    scanf("%d", &num2);

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    float division = num1 / num2;

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %f", division);

    return 0;
}