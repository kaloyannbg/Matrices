#include <stdio.h>
#define ROWS 5
#define COLS 5

int inputElements(int array[][COLS], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("  ROW No %d \n", i);

        for (int j = 0; j < COLS; j++)
        {
            printf("  Please enter COL No%d: ", j);
            scanf("%d", &array[i][j]);
        }
    }
}

int print2dArray(int array[][COLS], int size) {
 for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("  arr[%d][%d] = %5d | ", i, j, array[i][j]);
        }
        putchar('\n');
    }
}


int main()
{

    int array[ROWS][COLS] = {0};

    inputElements(array, ROWS);

    print2dArray(array, ROWS);

    return 0;
}
