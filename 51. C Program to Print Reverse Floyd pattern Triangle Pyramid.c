#include <stdio.h>

int main() {
    int i, j, rows = 5;
    int current_num;
    int start_num = rows * (rows + 1) / 2; // Total numbers (15 for rows=5)

    for (i = rows; i >= 1; i--) {
        current_num = start_num - i + 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", current_num++);
        }
        start_num -= i;
        printf("\n");
    }
    return 0;
}
/* Output for rows=5:
11 12 13 14 15
7 8 9 10
4 5 6
2 3
1
*/
