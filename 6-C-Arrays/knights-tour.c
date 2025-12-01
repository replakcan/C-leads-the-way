#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define BOARD_SIZE 8

// TODO [Alper] - Board'un sınırlarını dikkate alacak şekilde move fxn'unu düzenle.

void printBoard(int board[][BOARD_SIZE], const int boardSize);
void move(int *const currRow, int *const currCol, const int *const vertical, const int *const horizontal, int *const mPtr, int board[][BOARD_SIZE]);

int main(void)
{
    srand(time(NULL));

    int board[BOARD_SIZE][BOARD_SIZE] = {0};

    int horizontal[] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[] = {-1, -2, -2, -1, 1, 2, 2, 1};

    int currentRow = 3;
    int currentColumn = 4;

    int movesMade = 0;

    int *movesMadePtr = &movesMade;
    int *currRowPtr = &currentRow;
    int *currColPtr = &currentColumn;

    board[currentRow][currentColumn] = 99;

    printBoard(board, BOARD_SIZE);

    move(currRowPtr, currColPtr, &vertical[0], &horizontal[0], movesMadePtr, board);
    printBoard(board, BOARD_SIZE);
    printf("\n\n");

    move(currRowPtr, currColPtr, &vertical[0], &horizontal[0], movesMadePtr, board);
    printBoard(board, BOARD_SIZE);
    printf("\n\n");

    move(currRowPtr, currColPtr, &vertical[0], &horizontal[0], movesMadePtr, board);
    printBoard(board, BOARD_SIZE);

    return 0;
}

void printBoard(int board[][BOARD_SIZE], const int boardSize)
{
    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardSize; j++)
        {
            printf("%2d ", board[i][j]);
        }
        printf("\n\n");
    }
}

void move(int *const currRow, int *const currCol, const int *const vertical, const int *const horizontal, int *const mPtr, int board[][BOARD_SIZE])
{
    (*mPtr)++;
    printf("currCoordsBefore: {x,y} = {%d, %d}\n", *currRow, *currCol);

    do
    {
        int moveNumber = rand() % 8;

        *currRow += vertical[moveNumber];
        *currCol += horizontal[moveNumber];
        printf("moveNumber: %d\n", moveNumber);
        printf("operation: {%d, %d}\n", vertical[moveNumber], horizontal[moveNumber]);
    } while (board[*currRow][*currCol] != 0);

    board[*currRow][*currCol] = *mPtr;

    printf("currCoordsAfter: {x,y} = {%d, %d}\n", *currRow, *currCol);
}