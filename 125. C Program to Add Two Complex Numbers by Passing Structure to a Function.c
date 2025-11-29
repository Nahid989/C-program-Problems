#include <stdio.h>

struct Complex {
    float real;
    float imag;
};

// Function that takes two Complex structures and returns a Complex structure
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    struct Complex n1 = {5.5, 3.2};
    struct Complex n2 = {1.5, 2.8};
    struct Complex result;

    result = addComplex(n1, n2);

    printf("Sum = %.1f + %.1fi\n", result.real, result.imag);
    return 0;
}
