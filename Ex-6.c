#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

void putRandomValues(int intArray[][COLS], int size);

void bubbleSort(int intArray[][COLS], int size);

void printMatrix(int intArray[][COLS], int size);

int searchInIntArray(int intArray[][COLS], int size, int value);

int main()
{

    srand(time(0));

    int arr[ROWS][COLS];

    int value = 0;

    printf(" Find value in array: ");

    scanf("%d", &value);

    putRandomValues(arr, ROWS);

    printMatrix(arr, ROWS);

    printf(" Matrix after bubble sorting\n\n");

    bubbleSort(arr, ROWS);

    printMatrix(arr, ROWS);

    if(searchInIntArray(arr, ROWS, value) == value) {
        printf("  You find value: %d", value);
    }
    else if(searchInIntArray(arr, ROWS, value) == -1) {
        printf(" You dont find the value! ");
    }

    return 0;
}

int searchInIntArray(int intArray[][COLS], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (intArray[i][j] == value)
            {
                return value;
            }
        }
    }

    return -1;
}

void bubbleSort(int intArray[][COLS], int size)
{
    int temp = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            for (int z = 0; z < COLS; z++)
            {
                if (intArray[i][j] < intArray[i][z])
                {
                    temp = intArray[i][j];
                    intArray[i][j] = intArray[i][z];
                    intArray[i][z] = temp;
                }
            }
        }
    }
}

void putRandomValues(int intArray[][COLS], int size)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            intArray[i][j] = rand() % 100; // number from 0 to 99
        }
        putchar('\n');
    }
}

void printMatrix(int intArray[][COLS], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf(" %3d ", intArray[i][j]);
        }
        printf("\n\n");
    }
}