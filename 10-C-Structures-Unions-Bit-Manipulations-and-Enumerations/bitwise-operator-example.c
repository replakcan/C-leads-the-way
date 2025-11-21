#include <stdio.h>

void displayBits(unsigned value);

int main(void)
{
    unsigned x;

    printf("Enter an unsigned integer: ");
    scanf("%u", &x);

    displayBits(x);

    return 0;
}

void displayBits(unsigned value)
{
    unsigned counter;

    unsigned displayMask = 1 << __CHAR_BIT__ * sizeof(unsigned) - 1;

    for (counter = 1; counter <= __CHAR_BIT__ * sizeof(unsigned); counter++)
    {
        putchar(value & displayMask ? '1' : '0');

        value <<= 1;

        if (counter % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}