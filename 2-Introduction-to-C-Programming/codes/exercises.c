#include <stdio.h>

int ex2_3(void);
int ex2_4(void);
int ex2_9(void);
int ex2_15(void);
int ex2_16(void);
int ex2_17(void);
int ex2_18(void);
int ex2_19(void);
int ex2_20(void);
int ex2_21(void);
int ex2_22(void);
int ex2_23(void);
int ex2_25(void);

int main(void)
{
    ex2_25();

    return 0;
}

int ex2_3(void)
{
    int c, thisVariable, q76354, number;
    int a;

    printf("enter an integer: ");
    scanf("%d", &a);

    if (number != 7)
    {
        printf("The variable number is not equal to 7.\n");
    }

    printf("This is a C program.\n");
    printf("This is a C\nprogram.\n");
    printf("This\nis\na\nC\nprogram.\n");
    printf("This\tis\ta\tC\tprogram.\n");

    return 0;
}

/* Program will calculate the
    product of three inregers. */
int ex2_4(void)
{
    int x, y, z, result;

    printf("enter three integers: ");
    scanf("%d%d%d", &x, &y, &z);

    result = x * y * z;

    printf("The product is %d\n", result);

    return 0;
}

/* Program performs a sample payroll calculation */
int ex2_9(void)
{
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d%d", &b, &c);

    a = b * c;

    printf("The product of the inputs is equal to %d\n", a);

    return 0;
}

int ex2_15(void)
{
    int num1, num2;

    printf("enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("sum: %d\n", num1 + num2);
    printf("product: %d\n", num1 * num2);
    printf("difference: %d\n", num1 - num2);
    printf("quotient: %d\n", num1 / num2);
    printf("remainder: %d\n", num1 % num2);

    return 0;
}

int ex2_16(void)
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;

    printf("1 2 3 4\n");

    printf("%d %d %d %d\n", num1, num2, num3, num4);

    printf("%d ", num1);
    printf("%d ", num2);
    printf("%d ", num3);
    printf("%d\n", num4);

    return 0;
}

int ex2_17(void)
{
    int num1, num2;

    printf("enter two integers: ");
    scanf("%d%d", &num1, &num2);

    if (num1 > num2)
        printf("%d is larger\n", num1);

    if (num2 > num1)
        printf("%d is larger\n", num2);

    if (num1 == num2)
        printf("These numbers are equal.\n");

    return 0;
}

int ex2_18(void)
{
    int diameter;

    printf("enter the diameter of the circle in meters: ");
    scanf("%d", &diameter);

    printf("diameter: %d meters\n", diameter * 2);
    printf("circumference: %f meters\n", 2 * diameter * 3.14159);
    printf("area: %f square meter\n", 3.14159 * diameter * diameter);

    return 0;
}

int ex2_19(void)
{
    printf("*********\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*********\n\n");

    printf("   ***   \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("   ***   \n\n");

    printf("  *  \n");
    printf(" *** \n");
    printf("*****\n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n");
    printf("  *  \n\n");

    printf("    *    \n");
    printf("   * *   \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("  *   *  \n");
    printf("   * *   \n");
    printf("    *    \n\n");

    return 0;
}

int ex2_20(void)
{
    printf("*\n**\n***\n****\n*****\n");

    return 0;
}

int ex2_21(void)
{
    int num1, num2, num3, num4, num5;

    printf("enter five integers: ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    int largest, smallest = num1;

    if (num2 > largest)
        largest = num2;

    if (num2 < smallest)
        smallest = num2;

    if (num3 > largest)
        largest = num3;

    if (num3 < smallest)
        smallest = num3;

    if (num4 > largest)
        largest = num4;

    if (num4 < smallest)
        smallest = num4;

    if (num5 > largest)
        largest = num5;

    if (num5 < smallest)
        smallest = num5;

    printf("the smallest number: %d\n", smallest);
    printf("the largest number: %d\n", largest);

    return 0;
}

int ex2_22(void)
{
    int num;

    printf("enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is an even number\n", num);

    if (num % 2 != 0)
        printf("%d is an odd number\n", num);

    return 0;
}

int ex2_23(void)
{
    printf("********\n");
    printf(" ********\n");
    printf("********\n");
    printf(" ********\n");
    printf("********\n");
    printf(" ********\n");
    printf("********\n");
    printf(" ********\n");

    return 0;
}

int ex2_25(void)
{
    int num;
    int digit1, digit2, digit3, digit4, digit5;

    printf("enter a five-digit number: ");
    scanf("%d", &num);

    digit1 = num % 10;
    digit2 = num / 10 % 10;
    digit3 = num / 100 % 10;
    digit4 = num / 1000 % 10;
    digit5 = num / 10000 % 10;

    printf("%d\t%d\t%d\t%d\t%d\t\n", digit5, digit4, digit3, digit2, digit1);

    return 0;
}