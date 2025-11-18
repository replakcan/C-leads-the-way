#include <stdio.h>

void reverse(const char *const sPtr);

int main(void)
{
    char sentence[80];

    printf("Enter a line of text:\n");
    gets(sentence);

    printf("\nThe line printed backward is:\n");
    reverse(sentence);
}

void reverse(const char *const sPtr)
{
    if (sPtr[0] == '\0')
        return;
    else
    {
        reverse(&sPtr[1]);

        putchar(sPtr[0]);
    }
}