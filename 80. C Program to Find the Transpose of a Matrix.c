#include <stdio.h>

int main() {
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // 3x2 matrix
    int rows = 3, cols = 2;
    // Transpose will be 2x3
    int T[2][3], i, j;

    printf("Original Matrix A (3x2):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Transpose logic (T[j][i] = A[i][j])
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            T[j][i] = A[i][j];
        }
    }

    printf("\nTranspose Matrix T (2x3):\n");
    for (i = 0; i < cols; i++) { // Note: Transpose has 'cols' rows and 'rows' columns
        for (j = 0; j < rows; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
