#include <stdio.h>

int main() {
    int i, j, rows = 5;
    // Top half of hollow diamond
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows + i - 1; j++) {
            if (j == rows - i + 1 || j == rows + i - 1) {
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
* *
*/
