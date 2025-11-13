#include <stdio.h>
#define SIZE 10

int main(void)
{
    float numbers[SIZE] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

    float *nPtr;

    nPtr = numbers;
    nPtr = &numbers[0];
    
    for (int i = 0; i < SIZE; i++)
    {
        printf("%.1f ", numbers[i]);
        printf("%.1f ", *(nPtr + i));
        printf("%.1f ", *(numbers + i));
        printf("%.1f ", nPtr[i]);
    }

    printf("\n");

    // 4th element
    printf("%.1f %.1f %.1f %.1f\n", numbers[4], *(numbers + 4), nPtr[4], *(nPtr + 4));

    printf("%.1f", *(nPtr + 8));

    return 0;
}