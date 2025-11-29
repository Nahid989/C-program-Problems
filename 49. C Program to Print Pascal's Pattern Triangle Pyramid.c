#include <stdio.h>

int main() {
    int i, j, space, rows = 5, coef = 1;
    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("  "); // Print spaces for centering

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                // Calculate binomial coefficient (i C j)
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}
/* Output for rows=5:
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/
