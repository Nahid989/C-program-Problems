#include <stdio.h>

int main() {
    float principal, time, rate, SI;
    printf("Enter Principal amount, Time (years), and Rate: ");
    scanf("%f %f %f", &principal, &time, &rate);

    // Formula: SI = (P * T * R) / 100
    SI = (principal * time * rate) / 100;

    printf("Simple Interest = %.2f\n", SI);
    return 0;
}
