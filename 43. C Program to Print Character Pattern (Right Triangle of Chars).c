#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch);
        }
        ch++; // Increment character for the next row
        printf("\n");
    }
    return 0;
}
/* Output for rows=5:
A
B B
C C C
D D D D
E E E E E
*/
