#include <stdio.h>

float avg_calc(float grades[])
{
    float sum;
    for (int i = 1; i <= sizeof(grades) / sizeof(grades[0]); i++)
    {
        sum += i;
    }

    return sum / (sizeof(grades) / sizeof(grades[0]));
}

int main()
{
    float grade;
    int amount_of_grades;

    printf("Enter amount of subjects to grade: ");

    scanf("%d", &amount_of_grades);

    float grades[amount_of_grades];

    for (int i = 0; i < amount_of_grades; i++)
    {
        printf("Enter grade: ");
        scanf("%f", &grade);
        grades[i] = grade;
    }

    /*for (int j = 1; j <= sizeof(grades) / sizeof(grades[0]); j++)
    {
        printf("%d\n", j);
    }
    */

   
    return 0;
}