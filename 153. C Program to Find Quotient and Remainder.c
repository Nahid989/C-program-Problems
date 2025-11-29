#include <stdio.h>

int main() {
    int dividend, divisor, quotient, remainder;

    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    // Quotient is found using integer division
    quotient = dividend / divisor;

    // Remainder is found using the modulo operator (%)
    remainder = dividend % divisor;

    printf("\nQuotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
}
