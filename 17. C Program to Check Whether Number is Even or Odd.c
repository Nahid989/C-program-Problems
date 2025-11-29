#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checks if the remainder when divided by 2 is 0
    if (num % 2 == 0) {
        printf("%d is an Even number.\n", num);
    } else {
        printf("%d is an Odd number.\n", num);
    }
    return 0;
}
