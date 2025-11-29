#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = 3;
    int temp, i;

    printf("Original Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) printf("%d\t", matrix[i][j]);
        printf("\n");
    }

    // Interchange Logic: Swap elements of the main diagonal with the anti-diagonal
    for (i = 0; i < size; i++) {
        int j = size - 1 - i; // Index of the anti-diagonal element

        // Swap matrix[i][i] (main diagonal) with matrix[i][j] (anti-diagonal)
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][j];
        matrix[i][j] = temp;
    }

    printf("\nMatrix After Interchanging Diagonals:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) printf("%d\t", matrix[i][j]);
        printf("\n");
    }
    return 0;
}
