#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= 2 * rows - 1; j++) {
            // Logic for a hollow full pyramid
            if (j == rows - i + 1 || j == rows + i - 1 || i == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/* Output for rows=5:
        *
       * *
      * *
     * *
    *********
*/
