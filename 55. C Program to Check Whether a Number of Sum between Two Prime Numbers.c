#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n, i;
    printf("Enter a positive even integer: ");
    scanf("%d", &n);

    // Checks Goldbach's Conjecture (every even integer > 2 is the sum of two primes)
    for (i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d can be expressed as the sum of %d and %d.\n", n, i, n - i);
            return 0; // Found a pair, exit
        }
    }

    printf("%d cannot be expressed as the sum of two prime numbers (or no such pair was found).\n", n);
    return 0;
}
