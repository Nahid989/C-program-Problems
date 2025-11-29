#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Formula: C = (F - 32) * 5/9
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celsius = %.2f\n", celsius);
    return 0;
}
