#include <stdio.h>

int main(void)
{
    /* struct part
    {
        int partNumber;
        char partName[26];
    };

    typedef struct part Part;

    Part a, b[10], *ptr;

    printf("Part number for struct a: ");
    scanf("%d", &a.partNumber);

    printf("Part name for struct a: ");
    scanf("%25s", a.partName);

    b[3] = a;
    ptr = b;

    printf("number: %d\n", (ptr + 3)->partNumber);
    printf("name: %s\n", (ptr + 3)->partName); */

    struct customer
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

    scanf("%ld", &_number.b);

    printf("%d\n", _number.b);

    return 0;
}