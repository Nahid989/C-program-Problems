#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3; // For a square matrix (3x3)
    int main_diag_sum = 0;
    int anti_diag_sum = 0;

    // Calculate sums
    for (int i = 0; i < size; i++) {
        // Main diagonal: i == j (1, 5, 9)
        main_diag_sum += matrix[i][i];

        // Anti-diagonal: i + j == size - 1 (3, 5, 7)
        anti_diag_sum += matrix[i][size - 1 - i];
    }

    printf("Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Main Diagonal (1+5+9) = %d\n", main_diag_sum);
    printf("Sum of Anti-Diagonal (3+5+7) = %d\n", anti_diag_sum);
    return 0;
}
