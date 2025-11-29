#include <stdio.h>

int main() {
    // This 3x3 matrix has 5 zeros (more than half of 9 elements = 4.5)
    int matrix[3][3] = {{1, 0, 0}, {0, 5, 0}, {7, 0, 0}};
    int rows = 3, cols = 3;
    int size = rows * cols;
    int zero_count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                zero_count++;
            }
        }
    }

    printf("Total elements: %d\n", size);
    printf("Zero elements: %d\n", zero_count);

    // Check if zero count is greater than (total elements / 2)
    if (zero_count > (size / 2)) {
        printf("The matrix is a SPARSES matrix.\n");
    } else {
        printf("The matrix is NOT a sparse matrix.\n");
    }
    return 0;
}
