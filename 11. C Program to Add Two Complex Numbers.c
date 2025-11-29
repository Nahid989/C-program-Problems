#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    float real;
    float imag;
} Complex;

int main() {
    Complex c1, c2, sum;

    printf("Enter real and imaginary parts of 1st complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of 2nd complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Adding complex numbers
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
