#include <stdio.h>

float avg_calc(float grades[], int size)
{
    float sum = 0;
    for (int i = 0; i <= size; i++)
    {
        sum += grades[i];
    }

    return sum / size;
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

    float avg = avg_calc(grades, amount_of_grades);
    printf("The average grade is: %.2f\n", avg);

    return 0;
}