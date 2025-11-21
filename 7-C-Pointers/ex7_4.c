#include <stdio.h>

int main(void)
{
    float number1, number2;

    number1 = 7.3;

    float *fPtr;

    fPtr = &number1;

    printf("%f\n", *fPtr);

    number2 = *fPtr;

    printf("%f\n", number2);

    printf("%p\n", &number1);

    printf("%p\n", fPtr);

    return 0;
}