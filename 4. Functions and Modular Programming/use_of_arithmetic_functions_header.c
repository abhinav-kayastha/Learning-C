#include <stdio.h>
#include <C:\Users\abhin\Learning C\4. Functions and Modular Programming\arithmetic_functions.h>

int main()
{
    int sum = addition(1, 2);
    int difference = subtraction(1, 2);
    int product = multiplication(1, 2);
    float quotient = division(1, 2);

    printf("\nSum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %f\n", quotient);
}