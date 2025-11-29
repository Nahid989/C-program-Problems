#include <stdio.h>

int main() {
    int i, originalNum, remainder, result;
    printf("Armstrong numbers between 1 and 1000 are: ");

    for (i = 1; i <= 1000; ++i) {
        originalNum = i;
        result = 0;

        // For numbers up to 1000 (3 digits), we use power of 3
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
