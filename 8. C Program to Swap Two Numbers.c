#include <stdio.h>

int main() {
    int a = 10, b = 20, temp;
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping logic using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
