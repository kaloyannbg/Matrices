#include <stdio.h>
#define ROWS 2
#define COLS 2

void main()
{

    int array[ROWS][COLS + 1];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf(" Enter number No%d: ", j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < ROWS; i++)
    {

        int totalCols = 0;

        int totalRows = 0;

        for (int j = 0; j < COLS; j++)
        {
            totalCols += array[i][j];
            totalRows += array[j][i];
        }

        array[i][COLS] = totalCols;
        array[ROWS][i] = totalRows;
    }

    for (int i = 0; i < ROWS + 1; i++)
    {
        for (int j = 0; j < COLS + 1; j++)
        {
            if ( !(i == ROWS && j == COLS))
            {
                printf("%3d ", array[i][j]);
            }
        }
        printf("\n\n");
    }
}