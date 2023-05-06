#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows = 3;
    int *cols = (int*)malloc(rows * sizeof(int));

    // initialize the number of columns in each row
    cols[0] = 2;
    cols[1] = 3;
    cols[2] = 4;

    // allocate memory for the jagged array
    int **jaggedArray = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        jaggedArray[i] = (int*)malloc(cols[i] * sizeof(int));
    }

    // initialize the jagged array
    jaggedArray[0][0] = 1;
    jaggedArray[0][1] = 2;
    jaggedArray[1][0] = 3;
    jaggedArray[1][1] = 4;
    jaggedArray[1][2] = 5;
    jaggedArray[2][0] = 6;
    jaggedArray[2][1] = 7;
    jaggedArray[2][2] = 8;
    jaggedArray[2][3] = 9;

    // print the jagged array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols[i]; j++) {
            printf("%d ", jaggedArray[i][j]);
        }
        printf("\n");
    }

    // free the memory
    for (int i = 0; i < rows; i++) {
        free(jaggedArray[i]);
    }
    free(jaggedArray);
    free(cols);

    return 0;
}
