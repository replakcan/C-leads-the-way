#include <stdio.h>

int main(void)
{
    int counter, grade, total;
    float average;

    counter = 0; // initialize etmem lazim ki garbage-value almasin define ettigim variable'lar.
    total = 0;

    printf("Enter a grade, -1 to the end: ");
    scanf("%d", &grade);

    while (grade != -1) // sentinel value
    {
        total += grade;
        counter++;

        printf("Enter a grade, -1 to the end: ");
        scanf("%d", &grade);
    }

    if (counter != 0)
    {
        average = (float)total / counter;

        printf("class average is: %.2f\n", average);
    }
    else
    {
        printf("No grades were entered.\n");
    }

    return 0;
}