#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define TRACK_SIZE 70

void moveFromOriginTo(char *origin, char animal, char *ptr, int step, char *destination);
int findTurtleIndex(char turtle, const char *ptr, const int size);
int findHareIndex(char hare, const char *ptr, const int size);

/*
    yarış pisti 70 birim uzunluğunda.

    kaplumbağa:
        fast plod 50% => +3,
        slip 20% => -6,
        slow plod 30% => +1,

    tavşan:
        sleep 20% => +0,
        big hop 20% => +9,
        big slip 10% => -12,
        small hop 30% => +1,
        small slip 20% => -2,

    her saniyede yarışmacılar hamle yapar.

    EĞER aynı konuma denk gelirlerse
        kaplumbğaa tavşanı ısırır ve pgorgam OUCH! yazdırır,

*/

int main(void)
{
    char raceTrack[TRACK_SIZE];

    int turtleLocation = 0;
    int hareLocation = 0;

    for (int i = 0; i < TRACK_SIZE; i++)
    {
        raceTrack[i] = ' ';
        printf("%c%c", raceTrack[i], i == TRACK_SIZE - 1 ? '\n' : ' ');
    }

    srand(time(NULL));

    for (int i = 0; i < 70; i++)
    {
        int roll = rand() % 10;

        switch (roll)
        {
        case 0:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 3, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 0, &raceTrack[69]);
            break;
        case 1:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 3, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 0, &raceTrack[69]);
            break;
        case 2:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 3, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 9, &raceTrack[69]);
            break;
        case 3:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 3, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 9, &raceTrack[69]);
            break;
        case 4:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 3, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], -12, &raceTrack[69]);
            break;
        case 5:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], -6, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 1, &raceTrack[69]);
            break;
        case 6:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], -6, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 1, &raceTrack[69]);
            break;
        case 7:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 1, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], 1, &raceTrack[69]);
            break;
        case 8:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 1, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], -2, &raceTrack[69]);
            break;
        case 9:
            moveFromOriginTo(&raceTrack[0], 'T', &raceTrack[turtleLocation], 1, &raceTrack[69]);
            moveFromOriginTo(&raceTrack[0], 'H', &raceTrack[hareLocation], -2, &raceTrack[69]);
            break;
        default:
            break;
        }

        turtleLocation = findTurtleIndex('T', raceTrack, TRACK_SIZE);
        hareLocation = findHareIndex('H', raceTrack, TRACK_SIZE);

        if (turtleLocation == 69)
        {
            printf("the...underdog won?! :O");
            break;
        }

        if (hareLocation == 69)
        {
            printf("Hare won!\n");
            break;
        }

        if (turtleLocation == hareLocation)
            printf("OUCH!\n");

        for (int i = 0; i < TRACK_SIZE; i++)
        {
            printf("%c%c", raceTrack[i], i == TRACK_SIZE - 1 ? '\n' : ' ');
        }

        sleep(1);
    }

    return 0;
}

void moveFromOriginTo(char *origin, char animal, char *ptr, int step, char *destination)
{
    *ptr = ' ';

    int distLeft = ptr - origin;
    int distRight = destination - ptr;

    if (step < 0 && -step > distLeft)
        step = -distLeft;

    if (step > 0 && step > distRight)
        step = distRight;

    *(ptr + step) = animal;
}

int findTurtleIndex(char turtle, const char *ptr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == turtle)
            return i;
    }

    return 0;
}

int findHareIndex(char hare, const char *ptr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ptr[i] == hare)
            return i;
    }

    return 0;
}