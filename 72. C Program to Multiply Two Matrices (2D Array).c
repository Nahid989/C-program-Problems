#include <stdio.h>

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}}; // 2x3 matrix
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}}; // 3x2 matrix
    int C[2][2], i, j, k; // Resultant 2x2 matrix

    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;

    // Initialize result matrix C to 0
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0;
        }
    }

    // Multiplying the matrices (C[i][j] = sum(A[i][k] * B[k][j]))
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A * B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
