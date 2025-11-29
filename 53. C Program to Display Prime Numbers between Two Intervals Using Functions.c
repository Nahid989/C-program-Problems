#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool checkPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int low, high;
    printf("Enter two positive integers (intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);

    // Ensure low is at least 2, as 1 and below are not prime
    if (low <= 1) low = 2;

    for (int i = low; i <= high; ++i) {
        if (checkPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
