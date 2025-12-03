#include <stdio.h>

void displayBits(unsigned value);
void doubleWithBitShifting(int *ptr);
void packChars(void);
int main(void)
{
    /* struct part
    {
        int partNumber;
        char partName[26];
    };

    typedef struct part Part;

    part a, b[10], *ptr;

    printf("Part number for struct a: ");
    scanf("%d", &a.partNumber);

    printf("Part name for struct a: ");
    scanf("%25s", a.partName);

    b[3] = a;
    ptr = b;

    printf("number: %d\n", (ptr + 3)->partNumber);
    printf("name: %s\n", (ptr + 3)->partName); */

    /* struct customer
    {
        char lastName[15];
        char firstName[15];
        int customerNumber;

        struct
        {
            char phoneNumber[11];
            char address[50];
            char city[15];
            char state[3];
            char zipCode[6];
        } personal;
    } customerRecord, *customerPtr;

    customerPtr = &customerRecord;

    customerRecord.lastName;
    customerPtr->lastName;

    customerRecord.firstName;
    customerPtr->firstName;

    customerRecord.customerNumber;
    customerPtr->customerNumber;

    customerRecord.personal.phoneNumber;
    customerRecord.personal.address;
    customerRecord.personal.city;
    customerRecord.personal.state;
    customerRecord.personal.zipCode;

    customerPtr->personal.phoneNumber;
    customerPtr->personal.address;
    customerPtr->personal.city;
    customerPtr->personal.state;
    customerPtr->personal.zipCode;

    union integer
    {
        char c;
        short s;
        int i;
        long b;
    };

    union integer _number;

    scanf("%ld", &_number.b); */

    // printf("%d\n", _number.b);

    /* Unsigned counter;
    int intVal;

    printf("Enter an integer: ");
    scanf("%d", &intVal);

    // displayBits(intVal);

    printf("%d", intVal >> 4); */

    int x = 5;
    int *xPtr = &x;

    doubleWithBitShifting(xPtr);
    printf("x after = %d\n", x);

    packChars();
    
    return 0;
}

void displayBits(unsigned value)
{
    unsigned counter;

    unsigned displayMask = 1 << __CHAR_BIT__ * sizeof(unsigned) - 1;

    for (counter = 1; counter <= __CHAR_BIT__ * sizeof(unsigned); counter++)
    {
        putchar(value & displayMask ? '1' : '0');

        value <<= 1;

        if (counter % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}

void doubleWithBitShifting(int *ptr)
{
    *ptr = *ptr << 1;
}

void packChars(void){
  char a, b;
  unsigned x, y;
  
  printf("Enter two chars: ");
  scanf("%c%c", &a, &b);

  x = a;
  x = x << 8;
  x = x | b;

  printf("a = %u\n", a);
  printf("b = %u\n", b);
  printf("packed together output = %u\n", x);
}
