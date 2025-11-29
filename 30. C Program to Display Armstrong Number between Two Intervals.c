#include <stdio.h>
#include <math.h>

int main() {
    int low, high, i, originalNum, remainder, result, n;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Armstrong numbers between %d and %d are: ", low, high);

    for (i = low; i <= high; ++i) {
        originalNum = i;
        n = 0;
        result = 0;

        // Count number of digits
        for (originalNum = i; originalNum != 0; ++n) {
            originalNum /= 10;
        }
        originalNum = i;

        // Calculate sum of n-th powers of digits
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
