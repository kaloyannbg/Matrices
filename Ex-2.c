#include <stdio.h>
#define ROWS 4
#define COLS 4

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

int sumOfTwo2dArrays(int array1[][COLS], int array2[][COLS], int total[][COLS], int size) {
    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {
            total[i][j] = array1[i][j] + array2[i][j];
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

int main() {

    int array1[4][4] = { 0 };
    int array2[4][4] = { 0 };

    int total[4][4] = { 0 };


    printf("  Please enter values of array 1 \n");
    inputElements(array1, ROWS);

    printf("  Please enter values of array 2 \n");
    inputElements(array2, ROWS);

    printf("  Array1 \n");
    print2dArray(array1, ROWS);

    printf("  Array2 \n");
    print2dArray(array2, ROWS);

    sumOfTwo2dArrays(array1, array2, total, ROWS);

    printf("  Total array \n");
    print2dArray(total, ROWS);



    return 0;
}