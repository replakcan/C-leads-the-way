#include <stdio.h>
#define SIZE 5

int main(void)
{
    unsigned int values[5] = {2, 4, 6, 8, 10};

    unsigned int *vPtr;

    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", values[i]);
    }

    printf("\n");

    vPtr = &values[0];
    vPtr = values;

    for (int offset = 0; offset < SIZE; offset++)
    {
        printf("%i ", *(vPtr + offset));
        printf("%i ", *(values + offset));
        printf("%i ", vPtr[offset]);
    }

    printf("\n");

    return 0;
}