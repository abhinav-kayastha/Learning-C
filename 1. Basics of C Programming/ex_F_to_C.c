#include <stdio.h>

int main()
{
    // put temperature from a hot climate
    float temp_F = 135;
    float temp_C;

    if (80.6 <= temp_F && temp_F <= 140)
    {
        temp_C = (temp_F - 32) * (5.0 / 9.0); // note: when doing division, make the numbers as floats
        printf("\n%f degrees Fahrenheit is %f degrees Celsius.\n", temp_F, temp_C);
    }
    else
    {
        printf("\nPlease enter a reasonable hot climate value.\n");
    }

    return 0;
}