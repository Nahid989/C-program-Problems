#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Sum = %d\n", sum(number));
    return 0;
}

// Recursive function definition
int sum(int n) {
    if (n != 0) {
        // sum() calls itself, decreasing n by 1 in each call
        return n + sum(n - 1);
    } else {
        return n; // Base case: stops the recursion when n is 0
    }
}
