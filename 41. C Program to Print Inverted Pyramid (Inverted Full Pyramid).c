#include <stdio.h>

int main() {
    int i, j, space, rows = 5;
    for (i = rows; i >= 1; --i) {
        // Print leading spaces (increases as rows decrease)
        for (space = 0; space < rows - i; ++space) {
            printf("  ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/* Output for rows=5:
* * * * * * * * * * * * * * * * * * * * * * * * * */
