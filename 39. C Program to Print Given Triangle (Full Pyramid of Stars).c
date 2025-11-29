#include <stdio.h>

int main() {
    int i, j, space, rows = 5;
    for (i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (space = 1; space <= rows - i; ++space) {
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
