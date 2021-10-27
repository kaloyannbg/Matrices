#include <stdio.h>
#define ROWS 3
#define COLS 3

void enterValues(int intArray[][COLS], int size);
int isIdentity(int intArray[][COLS], int size);
void printMatrix(int intArray[][COLS], int size);

int main()
{

    int array[ROWS][COLS] = {0};

    enterValues(array, ROWS);

    printMatrix(array, ROWS);

    if (isIdentity(array, ROWS))
    {
        printf("Matrix is identity");
    }
    else
    {
        printf("Matrix is not identity");
    }

    return 0;
}

void enterValues(int intArray[][COLS], int size)
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf(" Please enter No [%d][%d]: ", i, j);
            scanf("%d", &intArray[i][j]);
        }
        putchar('\n');
    }
}

int isIdentity(int intArray[][COLS], int size)
{
    int isTrue = 0;

    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (intArray[i][j] != 0 && i != j)
            {
                return 0;
            }
        }

        if (intArray[i][i] == 1)
        {
            isTrue++;
        }
    }

    if (isTrue == COLS)
    {
        return 1;
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