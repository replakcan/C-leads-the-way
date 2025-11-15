#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define HAND_SIZE 5

void dealHand(const char *wSuit[], const char *wFace[]);
void determineHandValue(const int *const handPtr, const int handSize);
int checkIfArrayIncludesValue(const int const *arrPtr, const int arrSize, int value);
void sortHand(int *const ptr, const int size);
void printArray(const int *const ptr, const int size);
void determineHandValue(const int *const handPtr, const int handSize);

int main(void)
{
    const char *suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    const char *face[13] =
        {"Ace",
         "Deuce",
         "Three",
         "Four",
         "Five",
         "Six",
         "Seven",
         "Eight",
         "Nine",
         "Ten",
         "Jack",
         "Queen",
         "King"};

    srand(time(NULL));

    dealHand(suit, face);

    return 0;
}

void dealHand(const char *wSuit[], const char *wFace[])
{
    int cardPositions[HAND_SIZE];
    int currentCard;
    int row;
    int column;

    for (int i = 0; i < 5; i++)
    {
        do
        {
            currentCard = rand() % 52;
        } while (checkIfArrayIncludesValue(cardPositions, HAND_SIZE, currentCard));

        cardPositions[i] = currentCard;

        row = currentCard / 13;
        column = currentCard % 13;

        printf("%s of %-8s%c", wFace[column], wSuit[row], i == 4 ? '\n' : '\t');
    }

    sortHand(cardPositions, HAND_SIZE);
    printArray(cardPositions, HAND_SIZE);
    determineHandValue(cardPositions, HAND_SIZE);
}

int checkIfArrayIncludesValue(const int const *arrPtr, const int arrSize, int value)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arrPtr[i] == value)
            return 1;
    }

    return 0;
}

void sortHand(int *const ptr, const int size)
{
    int temp;

    for (int j = 0; j < size; j++)
        for (int k = 0; k < size - 1; k++)
            if (*(ptr + (k + 1)) % 13 < *(ptr + k) % 13)
            {
                temp = *(ptr + k);
                *(ptr + k) = *(ptr + (k + 1));
                *(ptr + (k + 1)) = temp;
            }
}

void printArray(const int *const ptr, const int size)
{
    for (int i = 0; i < size; i++)
        printf("%d%c", ptr[i], i == (size - 1) ? '\n' : '\t');
}

int isHandContainPairs(const int const *handPtr, const int handSize)
{
    int rankCount[13] = {0};

    for (int i = 0; i < handSize; i++)
    {
        int rank = handPtr[i] % 13;
        rankCount[rank]++;
    }

    int four = 0;
    int three = 0;
    int pairs = 0;

    for (int r = 0; r < 13; r++)
    {
        if (rankCount[r] == 4)
            four = 1;
        else if (rankCount[r] == 3)
            three = 1;
        else if (rankCount[r] == 2)
            pairs++;
    }
    if (four)
        return 4;
    if (three && pairs == 1)
        return 32;
    if (three)
        return 3;
    if (pairs == 2)
        return 22;
    if (pairs == 1)
        return 2;
    return 0;
}

int isHandStraight(const int *const handPtr, const int handSize)
{
    for (int i = 0; i < handSize - 1; i++)
    {
        if (*(handPtr + (i + 1)) % 13 != *(handPtr + i) % 13 + 1)
            return 0;
    }

    return 1;
}

int isHandFlush(const int *const handPtr, const int handSize)
{

    for (int i = 0; i < handSize - 1; i++)
    {
        if (*(handPtr + i) / 13 != *(handPtr + (i + 1)) / 13)
            return 0;
    }

    return 1;
}

void determineHandValue(const int *const handPtr, const int handSize)
{
    int isHandFlush(const int *const handPtr, const int handSize);
    int isHandStraight(const int *const handPtr, const int handSize);
    int isHandContainPairs(const int *const handPtr, const int handSize);

    int flushState = isHandFlush(handPtr, handSize);
    int straightState = isHandStraight(handPtr, handSize);
    int pairState = isHandContainPairs(handPtr, handSize);

    switch (pairState)
    {
    case 4:
        printf("Four of a kind!\n");
        break;
    case 32:
        printf("Full house!\n");
        break;
    case 3:
        if (flushState)
            printf("Flush!\n");
        else if (straightState)
            printf("Straight!\n");
        else
            printf("Three of a kind!\n");
        break;
    case 22:
        if (flushState)
            printf("Flush!\n");
        else if (straightState)
            printf("Straight!\n");
        else
            printf("Two pair!\n");
        break;
    case 2:
        if (flushState)
            printf("Flush!\n");
        else if (straightState)
            printf("Straight!\n");
        else
            printf("Pair!\n");
        break;
    default:
        if (flushState)
            printf("Flush!\n");
        else if (straightState)
            printf("Straight!\n");
        else
            printf("High card!\n");
        break;
    }
}