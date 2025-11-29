#include <stdio.h>
#include <stdbool.h>

// Function declaration
bool isPrime(int num);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}

// Function definition
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
