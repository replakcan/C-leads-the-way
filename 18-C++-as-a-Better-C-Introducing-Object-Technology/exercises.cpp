#include <iostream>

int tripleByValue(int);
void tripleByReference(int &);

#include "min.h"

int main()
{
    int count = 19;

    printf("triple by value %d, %d\n", count, tripleByValue(count));

    tripleByReference(count);
    printf("%d\n", count);

    printf("min fxn template demo: %.2f\n", min(3.42, 3.31));
}

int tripleByValue(int count)
{
    return count * 3;
}

void tripleByReference(int &count)
{
    count *= 3;
}