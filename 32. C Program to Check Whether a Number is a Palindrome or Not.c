#include <stdio.h>

int main() {
    int n, reversed = 0, remainder, originalN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if (originalN == reversed)
        printf("%d is a Palindrome number.\n", originalN);
    else
        printf("%d is NOT a Palindrome number.\n", originalN);
    return 0;
}
