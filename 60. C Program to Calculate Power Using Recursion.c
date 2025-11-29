#include <stdio.h>

// Function declaration
long long power(int base, int exp);

int main() {
    int base, exp;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power exponent (non-negative): ");
    scanf("%d", &exp);

    printf("%d^%d = %lld\n", base, exp, power(base, exp));
    return 0;
}

// Recursive function definition
long long power(int base, int exp) {
    if (exp == 0)
        return 1; // Base case: x^0 = 1
    else if (exp > 0)
        return base * power(base, exp - 1); // x^n = x * x^(n-1)
    else
        // For negative exponents (optional handling)
        return 1; // Simplification: assuming non-negative exponent as per typical problem constraints
}
