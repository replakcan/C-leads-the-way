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
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define SIZE_TABLE 3

int ex6_11(void);
int calculateSalary(void);
int rollDiceTimes(int);
int airlineReservationSystem(int[]);

static int seats[10] = {0};

int main(void)
{
    srand(time(NULL));

    airlineReservationSystem(seats);

    /* double arr[SIZE] = {0};
    double fourthOfArr = arr[3];

    arr[3];
    arr[8] = 1.667;
    arr[6] = 3.333;

    printf("%dth element: %.2f\n", 6, arr[5]);
    printf("%dth element: %.2f\n", 9, arr[8]);

    printf("%s%13s\n", "Subscript", "Element");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%i%13.2f\n", i, arr[i]);
    }

    int table[SIZE_TABLE][SIZE_TABLE];
    int tableSize = 0;

    for (int x = 0; x < SIZE_TABLE; x++)
    {
        for (int y = 0; y < SIZE_TABLE; y++)
        {
            table[x][y] = x + y;

            printf("table[%d][%d] = %d\n", x, y, table[x][y]);

            tableSize++;
        }
    }

    printf("Table contains %d amount of elements.\n", tableSize); */

    return 0;
}

int ex6_11(void)
{
    int numArr[21] = {0};

    for (int i = 0; i < 20; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numArr[i]);

        if (i == 0)
            printf("%d   ", numArr[i]);

        for (int j = 0; j < i; i++)
        {
        }
    }

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
int calculateSalary(void)
{
    int grossSale;
    int salary;
    int salaryGroups[] = {200, 300, 400, 500, 600, 700, 800, 900, 1000};
    int countArr[9] = {0};

    printf("Enter gross sale: ");
    scanf("%d", &grossSale);

    while (grossSale != -1)
    {
        salary = 200 + (int)(grossSale * 0.09);

        for (int i = 0; i < 9; i++)
        {
            if (salary >= 1000)
            {
                ++countArr[8];
                break;
            }
            else if (salary >= salaryGroups[i] && salary < salaryGroups[i + 1])
            {
                ++countArr[i];
                break;
            }
        }

        printf("Enter gross sale: ");
        scanf("%d", &grossSale);
    }

    printf("%s %15s\n", "Range", "Count");

    for (int j = 0; j < 9; j++)
    {
        j == 8 ? printf("%d+  ", salaryGroups[j]) : printf("%d-%d", salaryGroups[j], salaryGroups[j + 1] - 1);

        printf("%10d\n", countArr[j]);
    }

    printf("\n");

    return 0;
}

int rollDiceTimes(int times)
{
    int firstRoll;
    int secondRoll;
    int sumFaces[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int sumCounter[11] = {0};

    for (int i = 0; i < times; i++)
    {
        firstRoll = rand() % 6 + 1;
        secondRoll = rand() % 6 + 1;

        int j = 0;
        while (sumFaces[j] != (firstRoll + secondRoll))
            j++;

        ++sumCounter[j];
    }

    printf("%-4s%10s\n", "Sum", "Count");

    for (int j = 0; j < 11; j++)
    {
        printf("%-4d%10d\n", sumFaces[j], sumCounter[j]);
    }

    return 0;
}

int airlineReservationSystem(int seats[])
{
    int seatClass;
    int seatChoice;

    do
    {
        printf("Enter a class(1=first class, 2=economy): ");
        scanf("%d", &seatClass);
    } while (seatClass != 1 && seatClass != 2);

    printf("Avaliable seats for %s: ", seatClass == 1 ? "first class" : "economy");

    int i = seatClass == 1 ? 0 : 5;
    int limit = seatClass == 1 ? 5 : 10;

    for (; i < limit; i++)
    {                                                                    
        if (seats[i] == 0)
            printf("%d ", i + 1);
    }

    printf("\nChoose a seat number from above: ");
    scanf("%d", &seatChoice);

    seats[seatChoice - 1] = 1;

    printf("\n");

    return 0;
}