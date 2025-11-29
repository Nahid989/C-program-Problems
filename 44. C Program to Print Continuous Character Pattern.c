#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch = 'A';
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%c ", ch);
            ch++; // Increment character continuously
        }
        printf("\n");
    }
    return 0;
}
/* Output for rows=5:
A
B C
D E F
G H I J
K L M N O
*/
