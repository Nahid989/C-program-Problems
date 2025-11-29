#include <stdio.h>

// Function declaration
long long factorial(int n);

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %lld\n", n, factorial(n));
    }
    return 0;
}

// Recursive function definition
long long factorial(int n) {
    if (n >= 1) {
        return n * factorial(n - 1); // Recursive step
    } else {
        return 1; // Base case: factorial of 0 is 1
    }
}
