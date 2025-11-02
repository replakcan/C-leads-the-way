#include <stdio.h>
#include <math.h>

int sumOfIntegersGivenByInput(void);
int averageOfIntegersGivenByInput(void);
int findSmallestIntegerByGivenInput(void);
int sumOfEvenIntegersFrom2to30(void);
int sumOfOddIntegersFrom0to15(void);
int calculateCompoundInterest(void);
int printLeftAlignedPyramid(void);
int printLeftAlignedReversePyramid(void);
int printRightAlignedReversePyramid(void);
int printRightAlignedPyramid(void);
int determineCustomerBalancAndLimit(void);
int histogramOfNumbers(void);
int retailProductsByProductNumber(void);
int ex4_19(void);

int main(void)
{
    ex4_19();
}

/*
    girilen ilk sayi kadar input alan, aldığı inputları toplayan program
*/

int sumOfIntegersGivenByInput()
{
    int range;
    int sum = 0;
    int temp;

    printf("Enter the amount: ");
    scanf("%d", &range);

    for (int i = 0; i < range; i++)
    {
        printf("Enter an integer: ");
        scanf("%d", &temp);

        sum += temp;
    }

    printf("Sum: %d\n", sum);

    return 0;
}

int averageOfIntegersGivenByInput(void)
{
    int count = 0;
    int sum = 0;
    int temp;

    printf("Enter an integer: ");
    scanf("%d", &temp);

    while (temp != 9999)
    {
        sum += temp;
        count++;

        printf("Enter an integer: ");
        scanf("%d", &temp);
    }

    printf("The average is: %.2f\n", (float)sum / count);

    return 0;
}

int findSmallestIntegerByGivenInput(void)
{
    int remaining;
    int smallest;
    int temp;

    printf("Enter the amount: ");
    scanf("%d", &remaining);

    printf("Enter an integer: ");
    scanf("%d", &temp);

    smallest = temp;

    for (int i = remaining - 1; i > 0; i--)
    {
        printf("Enter an integer: ");
        scanf("%d", &temp);

        if (temp < smallest)
            smallest = temp;
    }

    printf("Smallest integer: %d\n", smallest);

    return 0;
}

int sumOfEvenIntegersFrom2to30(void)
{
    int range = 30;
    int sum = 0;

    for (int i = 0; i <= 30; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
            printf("%d   ", i);
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}

int sumOfOddIntegersFrom0to15(void)
{
    int range = 15;
    int sum = 0;

    for (int i = 0; i <= 15; i++)
    {
        if (i % 2)
        {
            sum += i;
            printf("%d   ", i);
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}

int calculateCompoundInterest(void)
{
    double amount;
    double principal = 1000.0;
    double rate;
    int year;

    printf("%4s%21s%21s\n", "Rate", "Year", "Amount on deposit");

    for (year = 1; year <= 10; year++)
    {
        for (rate = 0.05; rate <= .1; rate += .01)
        {
            amount = principal * pow(1.0 + rate, year);
            printf("%4.2lf%21d%21f\n", rate, year, amount);
        }

        printf("\n");
    }

    return 0;
}

int printLeftAlignedPyramid(void)
{
    int height;

    printf("Enter the height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int printLeftAlignedReversePyramid(void)
{
    int height;

    printf("Enter the height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = height; j > i; j--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

int printRightAlignedReversePyramid(void)
{
    int height;

    printf("Enter the height: ");
    scanf("%d", &height);

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height + 1; j++)
        {
            if (j <= i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

int printRightAlignedPyramid(void)
{
    int height;

    printf("Enter the height: ");
    scanf("%d", &height);

    for (int i = height; i > 0; i--)
    {
        for (int j = 1; j < height + 1; j++)
        {
            if (j < i)
                printf(" ");
            else
                printf("*");
        }

        printf("\n");
    }

    return 0;
}

int determineCustomerBalancAndLimit(void)
{
    int acc;
    int prevLimit;
    int currBalance;

    printf("Enter acc number (-1 to end):");
    scanf("%d", &acc);

    while (acc != -1)
    {
        printf("Enter customer previous limit: ");
        scanf("%d", &prevLimit);

        printf("Enter customer current balance: ");
        scanf("%d", &currBalance);

        printf("%4s%21s%10s%21s\n", "Account", "Previous Limit", "Balance", "After Recession Status");

        printf("%4d%21d%10d%21s\n", acc, prevLimit, currBalance, currBalance > prevLimit / 2 ? "Exceeds" : "Balanced");

        printf("Enter acc number (-1 to end):");
        scanf("%d", &acc);
    }

    return 0;
}

int histogramOfNumbers(void)
{
    int temp;

    for (int i = 5; i > 0; i--)
    {
        do
        {
            printf("Enter a number (min 0): ");
            scanf("%d", &temp);
        } while (temp < 0);

        for (temp; temp > 0; temp--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

int retailProductsByProductNumber(void)
{

    int productNumber;
    int amount;
    float retailPrice;
    float weeklyProfit;

    for (int i = 1; i <= 5; i++)
    {
        productNumber = i;

        printf("Product %d retail times: ", productNumber);
        scanf("%d", &amount);

        switch (productNumber)
        {
        case 1:
            retailPrice = 2.98;
            break;
        case 2:
            retailPrice = 4.5;
            break;
        case 3:
            retailPrice = 9.98;
            break;
        case 4:
            retailPrice = 4.49;
            break;
        case 5:
            retailPrice = 6.87;
            break;
        default:
            printf("No product with that given number!");
            break;
        }

        float totalRetailPriceForOneProduct = retailPrice * amount;
        weeklyProfit += totalRetailPriceForOneProduct;
    }

    printf("Total retail worth for a week: $%.2f\n", weeklyProfit);

    return 0;
}

int ex4_19(void)
{
    int counter = 0;

    for (; counter++ < 10;)
        printf("%d\n", counter);

    return 0;
}

