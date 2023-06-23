#include <stdio.h>

int main()
{
    /*
    syntax of an array:

    datatype var_name[size_of_array] = {num1, num2, etc.}
    */

    float prices[] = {5, 10, 15, 20, 25, 30};

    for (int i = 0; i < (sizeof(prices)) / sizeof(prices[0]);    i++)
    {
        printf("$%.2f\n", prices[i]);
    }
}