#include <stdio.h>
#define FLOOR_SIZE 50

void penUp(int *pPtr);
void penDown(int *pPtr);
void turnRight(int *facePtr);
void turnLeft(int *facePtr);
void moveForward(const int *const penPtr, int floor[][FLOOR_SIZE], const int floorSize, int *steps_forward, const int *const dirPtr, int *const coords);
void printFloor(const int floor[][FLOOR_SIZE], const int fSize);

int main(void)
{

    int floor[FLOOR_SIZE][FLOOR_SIZE] = {0};

    int pen = 0;           // 0 for up, 1 for down
    int coords[] = {0, 0}; // starting position
    int turtle_direction[] = {0, 1};
    int steps_forward = 0;
    int currentCommand = 0;

    int *pPtr = &pen;
    int *facePtr = &turtle_direction[0];
    int *sPtr = &steps_forward;
    int *coordPtr = &coords[0];

    printf("initial direction: {%d, %d}\n", *facePtr, *(facePtr + 1));

    printf("Enter the next command(9 for exit): ");
    scanf("%d", &currentCommand);

    while (currentCommand != 9)
    {
        switch (currentCommand)
        {
        case 1:
            penUp(pPtr);
            break;
        case 2:
            penDown(pPtr);
            break;
        case 3:
            turnRight(facePtr);
            break;
        case 4:
            turnLeft(facePtr);
            break;
        case 5:
            moveForward(pPtr, floor, FLOOR_SIZE, sPtr, facePtr, coordPtr);
            break;
        case 6:
            printFloor(floor, FLOOR_SIZE);
            break;
        default:
            printf("Invalid command.\n");
            printf("Enter the next command(9 for exit): ");
            scanf("%d", &currentCommand);
            break;
        }

        printf("Enter the next command(9 for exit): ");
        scanf("%d", &currentCommand);
    }

    return 0;
}

void penUp(int *pPtr)
{
    *pPtr = 0;
}

void penDown(int *pPtr)
{
    *pPtr = 1;
}

void turnRight(int *facePtr)
{
    if (*facePtr == 0)
    {
        if (*(facePtr + 1) == 1)
        {
            *facePtr = 1;
            *(facePtr + 1) = 0;
        }
        else
        {
            *facePtr = -1;
            *(facePtr + 1) = 0;
        }
    }
    else if (*(facePtr + 1) == 0)
    {
        if (*facePtr == 1)
        {
            *facePtr = 0;
            *(facePtr + 1) = -1;
        }
        else
        {
            *facePtr = 0;
            *(facePtr + 1) = 1;
        }
    }

    printf("current direction: {%d, %d}\n", *facePtr, *(facePtr + 1));
}

void turnLeft(int *facePtr)
{
    if (*facePtr == 0)
    {
        if (*(facePtr + 1) == 1)
        {
            *facePtr = -1;
            *(facePtr + 1) = 0;
        }
        else
        {
            *facePtr = 1;
            *(facePtr + 1) = 0;
        }
    }
    else if (*(facePtr + 1) == 0)
    {
        if (*facePtr == 1)
        {
            *facePtr = 0;
            *(facePtr + 1) = 1;
        }
        else
        {
            *facePtr = 0;
            *(facePtr + 1) = -1;
        }
    }

    printf("current direction: {%d, %d}\n", *facePtr, *(facePtr + 1));
}

// TODO [alper] update the moveForward print squares logic if the pen is down
void moveForward(const int *const penPtr, int floor[][FLOOR_SIZE], const int floorSize, int *steps_forward, const int *const dirPtr, int *const coords)
{

    int prevRow = *coords;
    int prevCol = *(coords + 1);

    printf("   Enter amount: ");
    scanf("%d", steps_forward);

    *coords += (*steps_forward) * (*dirPtr);
    *(coords + 1) += (*steps_forward) * (*dirPtr + 1);

    if (*penPtr == 1)
    {
        /* for (int i = prevRow; i != *coords; i < *coords ? i++ : i--)
        {
        } */

        for (int j = prevCol; j != *(coords + 1); j++)
        {
            floor[0][j] = 1;
        }
    }
}

void printFloor(const int floor[][FLOOR_SIZE], const int fSize)
{
    for (int i = 0; i < fSize; i++)
    {
        for (int j = 0; j < fSize; j++)
        {

            printf("%d", floor[i][j]);
        }
        printf("\n");
    }
}