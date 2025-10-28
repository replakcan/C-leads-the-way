#include <stdio.h>

int main(void)
{
    int passes = 0;
    int failures = 0;
    int student = 1;

    int result;

    while (student <= 10)
    {

        printf("Enter result (1=pass or 2=fail): ");
        scanf("%d", &result);

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