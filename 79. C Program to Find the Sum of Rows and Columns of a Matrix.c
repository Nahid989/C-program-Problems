#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    int row_sum, col_sum;

    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Sum of Rows
    printf("\nSum of Rows:\n");
    for (int i = 0; i < rows; i++) {
        row_sum = 0;
        for (int j = 0; j < cols; j++) {
            row_sum += matrix[i][j];
        }
        printf("Sum of Row %d = %d\n", i + 1, row_sum);
    }

    // Sum of Columns
    printf("\nSum of Columns:\n");
    for (int j = 0; j < cols; j++) {
        col_sum = 0;
        for (int i = 0; i < rows; i++) {
            col_sum += matrix[i][j];
        }
        printf("Sum of Column %d = %d\n", j + 1, col_sum);
    }
    return 0;
}
