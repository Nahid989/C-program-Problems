#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    double principal, rate, time, CI;
    printf("Enter Principal, Rate (annual), and Time (years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    // Formula: CI = P * (1 + R/100)^T - P
    CI = principal * (pow((1 + rate / 100), time)) - principal;

    printf("Compound Interest = %.2lf\n", CI);
    return 0;
}
