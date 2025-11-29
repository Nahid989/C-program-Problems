#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= 2 * rows - 1; j++) {
            // Logic for inverted hollow full pyramid
            if (i == rows || j == rows - i + 1 || j == rows + i - 1) {
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
*********
 * *
  * *
   * *
    *
*/
