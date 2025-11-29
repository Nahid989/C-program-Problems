#include <stdio.h>

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int Sum[3][3], i, j;
    int rows = 3, cols = 3;

    // Adding the matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Matrix (A + B):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", Sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
