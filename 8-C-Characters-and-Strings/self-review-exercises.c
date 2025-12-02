#include <stdio.h>  // stdio library fxns
#include <ctype.h>  // character-handling library
#include <stdlib.h> // string-conversion functions
#include <string.h>

void stditoarr(char *arr);

int main(void)
{
    char c = 'a';
    int x, y, z;
    double d, e, f;
    char *ptr;
    char s1[100];
    char s2[200];

    char str[49];

    c = toupper(c);

    printf("c = %c\n", c);
    printf("%s%s\n", "C is ", isdigit(c) ? "a digit" : "not a digit");

    printf("%lu\n", strtol(str, NULL, 0));
    printf("%c is %s\n", c, iscntrl(c) ? "a control character" : "not a control character");

    /* gets(s1);

    printf("using gets is dangerous pal! but anyways here you go = %s\n", s1); */

    // stditoarr(str);

    // char *lastCPtr = strrchr(str, 'c');

    // printf("%c\n", str[lastCPtr - str]);

    putchar(c);
    printf("\n");

    char *toDouble = "8.63582";
    printf("%f\n", strtod(toDouble, NULL));

    printf("%c is %s\n", c, isalpha(c) ? "a letter" : "not a letter");
    printf("%c is %s\n", c, isprint(c) ? "a printing character" : "not a printing character");

    char *ptrcik = strstr(s1, s2);

    char *readFromThis = "1.27 10.3 9.432";
    sscanf(readFromThis, "%lf%lf%lf", &d, &e, &f);
    printf("d = %f\ne = %f\nf = %f\n", d, e, f);

    strcpy(s1, s2);
    printf("strcmp(s1, s2) = %d\n", strcmp(s1, s2));

    strncat(s1, s2, 10); // append 10 characters from s1 to s2

    strlen(s1);

    printf("%d\n", atoi("-21"));

    char *firstTokenLocation = strtok(s2, ",");

    char s[10];
    strncpy(s, "hello", 5);
    printf("%s\n", s);

    return 0;
}

void stditoarr(char *arr)
{
    char c;
    int i = 0;

    while ((c = getchar()) != '\n')
    {
        arr[i] = c;
        i++;
    }

    puts(arr);
}