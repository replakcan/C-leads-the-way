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

// extern int externalNumber = 2321312;

int main(void)
{
    isPerfectNumber();
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
