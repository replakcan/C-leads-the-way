#include <stdio.h>

int ex3_15(void);
int ex3_16(void);
int ex3_17(void);
int ex3_18(void);
int ex3_19(void);
int ex3_20(void);
int ex3_21(void);
int ex3_22(void);
int ex3_23(void);
int ex3_24(void);
int ex3_25(void);
int ex3_26(void);
int ex3_27(void);
int ex3_29(void);
int ex3_30(void);
int ex3_31(void);
int ex3_32(void);
int ex3_33(void);
int ex3_34(void);

int main(void)
{
    ex3_34();

    return 0;
}

int ex3_5(void)
{
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {
        sum += i;
        i++;
    }

    printf("Sum: %d", sum);

    return 0;
}

int ex3_15(void)
{

    float gallons;
    int miles;

    int count = 0;
    float overall = 0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f", &gallons);

    while (gallons != -1)
    {

        printf("Enter the miles driven: ");
        scanf("%d", &miles);

        overall += miles / gallons;
        printf("The miles / gallons for tihis tank was %.6f\n\n", miles / gallons);

        count++;

        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);
    }

    if (count != 0)
    {
        printf("The overall average miles/gallon was: %.6f\n", overall / count);
    }
    else
    {
        printf("No data entered.");
    }

    return 0;
}

int ex3_16(void)
{
    int accNumber;
    float beginningBalance, charges, credits, creditLimit;
    float newBalance;

    printf("Enter account number (-1 to end): ");
    scanf("%d", &accNumber);

    while (accNumber != -1)
    {
        printf("Enter beginning balance: ");
        scanf("%f", &beginningBalance);

        printf("Enter total charges: ");
        scanf("%f", &charges);

        printf("Enter credits: ");
        scanf("%f", &credits);

        printf("Enter credit limit: ");
        scanf("%f", &creditLimit);

        newBalance = beginningBalance + charges - credits;

        if (newBalance > creditLimit)
        {
            printf("Account: %d\n", accNumber);
            printf("Credit limit: %.2f\n", creditLimit);
            printf("Balance: %.2f\n", newBalance);
            printf("Credit Limit Exceeded.\n\n");
        }
        else
        {
            printf("\n");
        }

        printf("Enter account number (-1 to end): ");
        scanf("%d", &accNumber);
    }

    return 0;
}

int ex3_17(void)
{
    int days;
    float principal, rate;
    float interest;

    printf("Enter loan principal(-1 to end): ");
    scanf("%f", &principal);

    while (principal != -1)
    {
        printf("Enter interest rate: ");
        scanf("%f", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        interest = principal * rate * days / 365;

        printf("The interest charge is: $%.2f\n\n", interest);

        printf("Enter loan principal(-1 to end): ");
        scanf("%f", &principal);
    }

    return 0;
}

int ex3_18(void)
{
    int hours;
    float hourlyRate, salary;
    int straightTimeHourLimit = 40;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1)
    {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourlyRate);

        if (hours > 40)
        {
            int extraHours = hours - 40;
            salary = 40 * hourlyRate + extraHours * (hourlyRate + hourlyRate / 2);
        }
        else
        {
            salary = hours * hourlyRate;
        }

        printf("Salary is $%.2f\n\n", salary);

        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);
    }

    return 0;
}

int ex3_19(void)
{
    int i = 0;

    printf("pre increment: ");
    while (++i < 10)
    {
        printf("%d", i);
    }

    printf("\n");

    printf("post increment: ");
    i = 0;
    while (i++ < 10)
    {
        printf("%d", i);
    }

    printf("\n");

    return 0;
}

int ex3_20(void)
{
    int i = 1;

    while (i <= 10)
    {
        printf("%d\t", i);

        i++;
    }

    printf("\n");

    return 0;
}

int ex3_21(void)
{
    int counter = 1;
    int number, largest;

    printf("Enter a number: ");
    scanf("%d", &number);

    largest = number;

    while (counter < 10)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > largest)
        {
            largest = number;
        }

        counter++;
    }
    printf("Largest number: %d\n", largest);

    return 0;
}

int ex3_22(void)
{
    int i = 1;

    printf("N\t10*N\t100*N\t1000*N\n\n");

    while (i <= 10)
    {
        printf("%d\t%d\t%d\t%d\n", i, i * 10, i * 100, i * 1000);

        i++;
    }

    return 0;
}

int ex3_23(void)
{
    int i = 1;
    int j;
    printf("A\tA+2\tA+4\tA+6\n\n");

    while (i <= 5)
    {
        int j = i * 3;
        printf("%d\t%d\t%d\t%d\n", j, j + 2, j + 4, j + 6);

        i++;
    }

    return 0;
}

int ex3_24(void)
{
    int counter = 1;
    int number, largest, secondLargest;

    printf("Enter a number: ");
    scanf("%d", &number);

    secondLargest = number;
    largest = secondLargest;

    while (counter < 10)
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > largest)
        {
            secondLargest = largest;
            largest = number;
        }
        else if (number > secondLargest)
        {
            secondLargest = number;
        }

        counter++;
    }
    printf("Largest number: %d\n", largest);
    printf("Second largest number: %d\n", secondLargest);

    return 0;
}

int ex3_25(void)
{
    int passes = 0;
    int failures = 0;
    int student = 1;

    int result;

    while (student <= 10)
    {
        printf("Enter result (1=pass or 2=fail): ");
        scanf("%d", &result);

        while (result != 1 && result != 2)
        {
            printf("result must be either 1 or 2!\n");

            printf("Enter result (1=pass or 2=fail): ");
            scanf("%d", &result);
        }

        if (result == 1)
        {
            passes++;
        }
        else if (result == 2)
        {
            failures++;
        }

        student++;
    }

    printf("%d Passed\n%d Failed\n", passes, failures);

    if (passes > 8)
    {
        printf("Raise tuition\n");
    }

    return 0;
}

int ex3_26(void)
{
    int count = 1;

    while (count <= 10)
    {
        printf("%s\n", count % 2 ? "****" : "++++++++");
        count++;
    }

    return 0;
}

int ex3_27(void)
{
    int row = 10;
    int column;

    while (row >= 1)
    {
        column = 1;

        while (column <= 10)
        {
            printf("%s", row % 2 ? "<" : ">");
            column++;
        }
        row--;
        printf("\n");
    }

    return 0;
}

int ex3_28(void)
{
}

int ex3_29(void)
{
    int i, j = 0;
    int side;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &side);
    } while (side < 1 || side > 20);

    while (i < side)
    {
        while (j < side)
        {
            printf("*");
            j++;
        }

        printf("\n");
        i++;
        j = 0;
    }

    return 0;
}

int ex3_30(void)
{
    int i, j = 0;
    int side;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &side);
    } while (side < 1 || side > 20);

    while (i < side)
    {
        printf("*");
        i++;
    }

    printf("\n");
    i = 0;

    while (i + 2 < side)
    {
        while (j < side)
        {
            if (j == 0 || j == side - 1)
                printf("*");
            else
                printf(" ");
            j++;
        }

        printf("\n");
        i++;
        j = 0;
    }

    i = 0;

    while (i < side)
    {
        printf("*");
        i++;
    }

    printf("\n");

    return 0;
}

int ex3_31(void)
{
    int digit1, digit2, digit3, digit4, digit5;
    int subj;

    do
    {
        printf("Enter a five digit number: ");
        scanf("%d", &subj);
    } while (subj < 10000 || subj > 99999);

    digit1 = subj % 10;
    digit2 = subj / 10 % 10;
    digit3 = subj / 100 % 10;
    digit4 = subj / 1000 % 10;
    digit5 = subj / 10000 % 10;

    if (digit1 == digit5 && digit2 == digit4)
        printf("This number is a palindrome!\n");
    else
        printf("This number isn't a palindrome :-(\n");

    return 0;
}

/*
    5 digit binary number to its decimal value.

    input a binary number from the user.
    11100
    get the number's digits.
    number % 2 = first digit,
    number / 10 % 2 = 2nd digit,
    number / 100 % 2 = 3rd digit and so on.

    convert the number to a decimal one.
*/

int ex3_32(void)
{
    int binaryVal;
    int decimalVal;
    int biDigit1, biDigit2, biDigit3, biDigit4, biDigit5;
    int decimalDigit1, decimalDigit2, decimalDigit3, decimalDigit4, decimalDigit5;

    printf("Enter a binary integer (only 1's and 0's): ");
    scanf("%d", &binaryVal);

    biDigit1 = binaryVal % 2;
    biDigit2 = binaryVal / 10 % 2;
    biDigit3 = binaryVal / 100 % 2;
    biDigit4 = binaryVal / 1000 % 2;
    biDigit5 = binaryVal / 10000 % 2;

    decimalDigit1 = biDigit1 * 1;
    decimalDigit2 = biDigit2 * 2;
    decimalDigit3 = biDigit3 * 4;
    decimalDigit4 = biDigit4 * 8;
    decimalDigit5 = biDigit5 * 16;

    decimalVal = decimalDigit1 + decimalDigit2 + decimalDigit3 + decimalDigit4 + decimalDigit5;

    printf("Decimal value of %d is %d\n", binaryVal, decimalVal);

    return 0;
}

int ex3_33(void)
{
    int i = 0;

    while (i < 300000000)
    {
        if (i == 0)
            printf("GO!\n");
        if (i == 300000000 - 1)
            printf("DONE!\n");

        i++;
    }

    return 0;
}

int ex3_34(void)
{
    int range = 101;
    int i = 1;

    while (i < range)
    {
        printf("* ");

        if (i % 10 == 0)
            printf("\n");

        i++;
    }

    return 0;
}