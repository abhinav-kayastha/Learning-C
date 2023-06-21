#include <stdio.h>

int main()
{
    /*
    converting from int to float:

    int height = 195;
    float height_float = height;


    converting from float to int:

    float height = 175.65;
    int height_int = (int)height;
    NOTE: just takes 175 and does not round
    */

    int height = 179;
    float height_float = height;
    printf("\nHeight in float: %f\n", height_float);

    float weight = 65.5;
    int weight_float = (int)weight;
    printf("Weight in int: %d\n", weight_float);
}