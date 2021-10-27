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

int equalOfTwo2dArrays(int total[][COLS], int array1[][COLS], int array2[][COLS], int size) {
    for(int i = 0; i < size; i++) {

        for(int j = 0; j < size; j++) {
           total[i][j] = (array1[i][j] == array2[i][j]) ? 1 : 0;
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

    int totalEqual[ROWS][COLS] = { 0 };

    printf("  Please enter values of array 1 \n");
    inputElements(array1, ROWS);

    printf("  Please enter values of array 2 \n");
    inputElements(array2, ROWS);

    printf("  Array1 \n");
    print2dArray(array1, ROWS);

    printf("  Array2 \n");
    print2dArray(array2, ROWS);


    printf(" If they are equal = 1, if not 0\n");
    equalOfTwo2dArrays(totalEqual, array1, array2, ROWS);
    print2dArray(totalEqual, ROWS);




    return 0;
}