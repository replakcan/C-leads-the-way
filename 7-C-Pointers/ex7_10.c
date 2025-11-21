#include <stdio.h>

int main(void)
{
    long value1, value2;

    value1 = 200000;

    long *_1Ptr;

    _1Ptr = &value1;

    printf("%li\n", *_1Ptr);

    value2 = *_1Ptr;

    printf("%li\n", value2);

    printf("%p\n", &value1);
    printf("%p\n", _1Ptr);

    void zero(long bigIntegers[]);

    int add1andSum(int *oneTooSmall);

    return 0;
}