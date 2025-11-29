#include <stdio.h>

int main() {
    int n, i, j, is_prime;
    printf("Enter the upper limit N: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d are: ", n);

    for (i = 2; i <= n; i++) {
        is_prime = 1; // Assume i is prime
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0; // i is not prime
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
