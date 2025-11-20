#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define WORD_SIZE 20

int testPalindromeIterative(void);
int testPalindromeRecursive(char *const wPtr, const int wRange);

int main(void)
{
    char word[WORD_SIZE];
    char testWord[WORD_SIZE];

    printf("Enter the test subject: ");
    gets(word);

    int j = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        if (isalpha(word[i]))
        {
            testWord[j] = word[i];
            j++;
        }
    }

    printf("test subject: %s\n", testWord);

    const int recPalindrome = testPalindromeRecursive(testWord, strlen(testWord));

    printf("%d\n", recPalindrome);

    return 0;
}

int testPalindromeIterative(void)
{
    char word[20];

    printf("Enter the test subject: ");
    gets(word);

    const int range = strlen(word);

    int i = 0;
    while (i != range / 2)
    {
        if (word[i] != word[range - (i + 1)])
            return 0;

        i++;
    }

    return 1;
}

int testPalindromeRecursive(char *const wPtr, const int wRange)
{
    static int i = 0;

    if (wRange == 1)
        return 1;

    if (*(wPtr + i) != wPtr[wRange - 1])
        return 0;

    i++;
    return testPalindromeRecursive(wPtr, wRange - 1);
}