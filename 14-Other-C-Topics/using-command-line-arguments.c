#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *inFilePtr;
    FILE *outFilePtr;
    int c;

    if (argc != 3)
        printf("Usage: mycopy infile outfile\n");
    else
    {
        if ((inFilePtr = fopen(argv[1], "r")) != NULL)
        {
            if ((outFilePtr = fopen(argv[2], "w")) != NULL)
            {
                while ((c = fgetc(inFilePtr)) != EOF)
                {
                    fputc(c, outFilePtr);
                }
            }
            else
                printf("File \"%s\" could not be opened", argv[2]);
        }
        else
            printf("File \"%s\" could not be opened.", argv[1]);
    }

    return 0;
}