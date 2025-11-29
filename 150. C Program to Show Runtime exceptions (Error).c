#include <stdio.h>

int main() {
    int numerator = 10;
    int denominator = 0; // This will cause a runtime exception (SIGFPE: Floating point exception)
    int result;

    printf("Attempting to divide 10 by 0...\n");

    // Execution will typically crash here
    // result = numerator / denominator;

    // To allow the program to run, we comment out the crash line and show the consequence:
    if (denominator != 0) {
        result = numerator / denominator;
        printf("Result: %d\n", result);
    } else {
        printf("Error: Division by zero avoided in C code, but this operation (10/0) is a classic runtime error.\n");
    }

    // Another example: Array out-of-bounds access
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 10; // Accessing memory outside the array bounds

    printf("\nAttempting to read array at index 10 (out of bounds)...\n");
    // printf("Value: %d\n", arr[index]); // This can lead to unexpected behavior or crash
    printf("While C doesn't check bounds, accessing arr[10] is a major runtime error.\n");

    return 0;
}
