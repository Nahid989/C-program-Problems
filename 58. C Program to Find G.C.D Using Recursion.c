#include <stdio.h>

// Function declaration using Euclidean algorithm
int gcd(int n1, int n2);

int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    printf("G.C.D of %d and %d is %d.\n", n1, n2, gcd(n1, n2));
    return 0;
}

// Recursive function definition
int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2); // Recursive step
    else
        return n1; // Base case: when n2 is 0, n1 is the GCD
}
