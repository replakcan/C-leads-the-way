#include <stdio.h>
#include <stdlib.h>

void print(void);

int main(void)
{
    int answer;

    atexit(print);
    printf("Enter 1 to terminate program with function exit"
           "\nEnter 2 to terminate program normally\n");
    scanf("%d", &answer);

    if (answer == 1)
    {
        printf("\nTerminating program with function exit\n");
        exit(EXIT_SUCCESS);
    }

    printf("\nTerminating program by reaching the end of main\n");

    return 0;
}

void print(void)
{
    printf("Executing function print at program termination\nProgram terminated\n");
}