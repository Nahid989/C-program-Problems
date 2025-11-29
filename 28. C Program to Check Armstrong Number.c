#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int num, originalNum, remainder, result = 0, n = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    // Count the number of digits (n)
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }
    originalNum = num;

    // Calculate sum of n-th powers of digits
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
