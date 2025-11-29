#include <stdio.h>

int main() {
    // Declare and initialize a 3x3 2D array (matrix)
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int rows = 3;
    int cols = 3;

    printf("The 2D Array (Matrix) is:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }
    return 0;
}
