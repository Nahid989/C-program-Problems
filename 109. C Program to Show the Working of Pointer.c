#include <stdio.h>

int main() {
    int var = 10;
    int *ptr; // Declare a pointer variable 'ptr' that can store the address of an integer

    ptr = &var; // Store the address of 'var' in 'ptr'

    printf("Value of var (using var): %d\n", var);
    printf("Address of var (using &var): %p\n", &var);
    printf("Address of var (using ptr): %p\n", ptr);

    // Dereference the pointer to get the value
    printf("Value of var (using *ptr): %d\n", *ptr);

    // Change value using pointer
    *ptr = 25;
    printf("\nValue of var after changing via pointer: %d\n", var);
    return 0;
}
