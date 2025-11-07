#include <stdio.h>
#include <math.h>
#include <time.h>

int testMathLibFxns(void);
int smallest(int, int, int);
void instructions(void);
double calculateCharges(double);
int floorNumbers(void);
float roundNumberTo(float number, int digit);
void generateRandomNumberFromDifferentRanges(void);
double hypotenuse(double, double);
int integerPower(int, int);
int makeSquareOutOf(char, int);
int integerRemainder(int, int);
int printDigitsOfRandomNumber(void);
float findSmallestFloat(float, float, float);
int isPerfectNumber(void);
int isPrimeNumber(int);
int qualityPoints(void);
void coinToss(void);
int flip(void);
int multiplyTwoRandomNumbers(void);
int guessTheNumber(void);
int calculateRecursivePower(int, int);
int findNthFibonacciNumber(int);

// extern int externalNumber = 2321312;

int main(void)
{

    findNthFibonacciNumber(4);
    // printf("externalNumber: %d\n", externalNumber);

    // register int count = 0;
    // static float lastVal;

    /* double x;

    x = fabs(10.85);
    printf("x: %f\n", x);
    x = floor(10.85);
    printf("x: %f\n", x);
    x = fabs(-0.678);
    printf("x: %f\n", x);
    x = ceil(9.234);
    printf("x: %f\n", x);
    x = fabs(0.0);
    printf("x: %f\n", x);
    x = ceil(-34.87);
    printf("x: %f\n", x);
    x = ceil(-fabs(-12 - floor(-9.5)));
    printf("x: %f\n", x); */
}

int testMathLibFxns(void)
{
    float mod_ = fmod(13.657, 2.333);
    float sin_ = sin(0.0);
    float cos_ = cos(0.0);
    float tan_ = tan(0.0);

    printf("mod: %.2f\nsin: %.2f\ncos: %.2f\ntan: %.2f\n", mod_, sin_, cos_, tan_);
}

int smallest(int x, int y, int z)
{
    int smallest = x;

    if (y < smallest)
        smallest = y;

    if (z < smallest)
        smallest = z;

    return smallest;
}

void instructions(void)
{
    printf("FOLLOW THE WHITE RABBIT!\n");
}

float intToFloat(int number)
{
    return (float)number;
}

/*
    3 saat -> 2 dolar
    her 3 saat üstü 1 saat için -> 0.5 dolar
    24 saat -> 10 dolar
*/

double calculateCharges(double hours) // TODO [Alper] şu soxtumun fxn'unu duzelt
{
    if (hours <= 3)
        return 2;
    if (hours > 3 && hours < 24)
        return fmod(hours, 3) * .5 + hours / 3 * 2;
    if (hours >= 24)
    {
        int days = (hours) / 24;
        int threes = fmod(hours, 24) / 3;
        float taxes = fmod(hours, 3);

        printf("%d days in %.2f hours\n", days, hours);
        printf("%d threes in %.2f hours\n", threes, hours);
        printf("%f taxes in %.2f hours\n", taxes, hours);

        return days * 10 + threes * 2 + taxes;
    }
}

int floorNumbers(void)
{
    double number;
    int flooredInteger;

    printf("Enter a number: ");
    scanf("%lf", &number);

    while (number != -1) // bad programming
    {
        flooredInteger = floor(number + .5);

        printf("%.2f number floored to %d\n", number, flooredInteger);

        printf("Enter a number: ");
        scanf("%lf", &number);
    }

    return 0;
}

float roundNumberTo(float number, int digit)
{
    return floor(number * digit + .5) / digit;
}

void generateRandomNumberFromDifferentRanges(void)
{
    srand(time(NULL));
    int temp;

    int x = rand() % 2 + 1;
    printf("%d\n", x);

    x = rand() % 100 + 1;
    printf("%d\n", x);

    x = rand() % 10;
    printf("%d\n", x);

    x = rand() % 13 + 1000;
    printf("%d\n", x);

    x = rand() % 3 - 1;
    printf("%d\n", x);

    x = rand() % 15 - 3;
    printf("%d\n", x);

    temp = (rand() % 9 + 2);
    x = temp % 2 ? temp + 1 : temp;
    printf("%d\n", x);

    temp = (rand() % 9 + 3);
    x = temp % 2 ? temp : temp + 1;
    printf("%d\n", x);

    temp = (rand() % 9 + 3);
    x = temp % 2 ? temp : temp + 1;
    x *= 2;
    printf("%d\n", x);
}

double hypotenuse(double side1, double side2)
{
    double hypotenuse_ = sqrtf(side1 * side1 + side2 * side2);

    return hypotenuse_;
}

int integerPower(int base, int power)
{
    if (power == 1)
        return base;

    return base * integerPower(base, power - 1);
}

int makeSquareOutOf(char shape, int range)
{
    for (int i = 0; i < range; i++)
    {
        for (int j = 0; j < range; j++)
        {
            printf("%c", shape);
        }
        printf("\n");
    }

    return 0;
}

int integerPartOfTheQuotient(int a, int b)
{
    return a / b;
}

int integerRemainder(int a, int b)
{

    return a % b;
}

int printDigitsOfRandomNumber(void)
{
    srand(time(NULL));
    long x = rand();

    long digit = 1;

    printf("x = %ld\n", x);

    while (x > digit * 10)
    {
        digit *= 10;
    }

    while (x > 0)
    {
        int currNumber = x / digit;
        printf("%d   ", currNumber);

        x -= currNumber * digit;
        digit = digit / 10;
    }

    printf("\n");

    return 0;
}

int calculateSeconds(int hours, int minutes, int seconds)
{
    if (hours >= 12)
        return (hours - 12) * 3600 + (minutes * 60) + seconds;
    else
        return (hours * 3600) + (minutes * 60) + seconds + (12 * 3600);
}

float findSmallestFloat(float x, float y, float z)
{
    float smallest = x;

    if (y < smallest)
        return y;

    if (z < smallest)
        return z;

    return smallest;
}

int isPerfectNumber(void)
{
    int i;
    int temp;
    int sum;

    printf("Prime numbers between 1-1000 are:\n");

    for (int x = 1; x <= 1000; x++)
    {
        i = 1;
        sum = 0;

        while (i < x)
        {
            temp = x % i;

            if (!temp)
                sum += i;

            i++;
        }
        if (sum == x)
            printf("%d\n", x);
    }

    return 0;
}

int isPrimeNumber(int x)
{
    int i = 2;
    int temp;
    int sum = 0;

    while (i <= x)
    {
        temp = x % i;

        if (!temp)
            sum += i;

        i++;
    }

    if (sum == x)
        printf("%d is a prime number!\n", x);
    else
        printf("%d is not a prime number!\n", x);

    return 0;
}

int qualityPoints(void)
{
    int average;

    do
    {
        printf("Enter student average(0-100): ");
        scanf("%d", &average);
    } while (average < 0 || average > 100);

    if (average >= 90 && average <= 100)
        return 4;

    if (average >= 80 && average < 90)
        return 3;

    if (average >= 70 && average < 80)
        return 2;

    if (average >= 60 && average < 70)
        return 1;

    return 0;
}

void coinToss(void)
{
    srand(time(NULL));

    int tails = 0;
    int heads = 0;

    for (int i = 0; i < 100; i++)
    {
        flip() ? tails++ : heads++;
    }

    printf("Tails: %d\nHeads: %d\n", tails, heads);
}

int flip(void)
{
    int x = rand();

    return x % 2;
}

int multiplyTwoRandomNumbers(void)
{
    int studentAnswer;
    int correctAnswer;

    srand(time(NULL));

    do
    {
        int x = rand() % 10;
        int y = rand() % 10;

        int wrongAns;
        int successfulDialog;

        correctAnswer = x * y;

        printf("How much is %d times %d?\n", x, y);
        scanf("%d", &studentAnswer);

        if (correctAnswer == studentAnswer)
        {
            successfulDialog = rand() % 4;
            printf("%s\n", successfulDialog == 0   ? "Very good!"
                           : successfulDialog == 1 ? "Excellent!"
                           : successfulDialog == 2 ? "Nice work!"
                                                   : "Keep up the good work!");
        }

        else
        {
            do
            {
                wrongAns = rand() % 4;
                printf("%s\n", wrongAns == 0   ? "No, please try again."
                               : wrongAns == 1 ? "Wrong, try once more."
                               : wrongAns == 2 ? "Don't give up!"
                                               : "No. Keep trying.");
                scanf("%d", &studentAnswer);

                if (studentAnswer == correctAnswer)
                {
                    successfulDialog = rand() % 4;
                    printf("%s\n", successfulDialog == 0   ? "Very good!"
                                   : successfulDialog == 1 ? "Excellent!"
                                   : successfulDialog == 2 ? "Nice work!"
                                                           : "Keep up the good work!");
                }
            } while (studentAnswer != correctAnswer);
        }
    } while (correctAnswer == studentAnswer);

    return 0;
}

int guessTheNumber(void)
{
    int number;
    int guess;

    char repeat = 'y';

    srand(time(NULL));

    while (repeat == 'y')
    {
        number = rand() % 1000 + 1;
        printf("number: %d\n", number);

        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");

        printf("Please type your first guess: ");
        scanf("%d", &guess);

        if (guess == number)
        {
            printf("Excellent! You guessed the number!\n");

            printf("Would you like to play again (y or n)? ");
            scanf(" %c", &repeat);
        }
        else
        {
            do
            {
                if (guess > number)
                    printf("Too high. Try again: ");
                else
                    printf("Too low. Try again: ");

                scanf("%d", &guess);
            } while (guess != number);

            printf("Excellent! You guessed the number!\n");

            printf("Would you like to play again (y or n)?");
            scanf(" %c", &repeat);
        }
    }

    return 0;
}

int calculateRecursivePower(int base, int pow)
{
    if (pow == 0)
        return 1;

    return base * calculateRecursivePower(base, pow - 1);
}

// 1 1 2 3 5 8 13 21 34 55 89 ...
int findNthFibonacciNumber(int n)
{
    int a = 1;
    int b = 1;

    int temp;

    for (int i = 1; i <= n - 2; i++)
    {
        temp = b;
        b = a + b;
        a = temp;
    }

    printf(" %dth fibonacci number: %d\n", n, b);

    return b;
}