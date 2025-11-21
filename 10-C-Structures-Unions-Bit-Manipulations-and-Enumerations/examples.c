#include <stdio.h>

int main(void)
{
    struct employee
    {
        char firstName[20];
        char lastName[20];
        int age;
        char gender;
        double hourlySalary;
    };

    struct employee2
    {
        char firstName[20];
        char lastName[20];
        int age;
        char gender;
        double hourlySalary;
        // struct employee2 person; // ERROR
        struct employee2 *ePtr; // self-referencial structure (used to build linked data structures)
    };

    struct card
    {
        char *face;
        char *suit;
    } aCard, deck[52], *cardPtr;

    struct card bCard, bDeck[52]; // structure tag-name optional, tag-name olmazsa böyle ayrı define edemem, bir üstteki gibi etmem lazım.

    struct card cCard = {"Three", "Hearts"};

    cardPtr = &cCard;

    printf("%s\n", cCard.suit);
    printf("%s\n", cardPtr->suit); // access via the pointer of the initialized struct

    typedef struct card Card;

    typedef struct
    {
        char *name;
        int age;
    } Person;

    Person people[10]; // people, 10 tane Person barındıran bir array

    union number // union member'ları aynı belleği paylaşıyor bu yüzden bir seferde sadece bir member'a ulaşabiliyorum.
    {
        int x;
        double y;
    };

    union number value = {10};

    double *ptr = &value.y;

    value.x = 100;

    // printf("%d\n%d\n", value.x, *ptr);

    return 0;
}