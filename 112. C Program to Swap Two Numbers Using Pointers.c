#include <stdio.h>

// Function to swap two integers using their pointers (addresses)
void swap(int *n1, int *n2) {
    int temp = *n1; // Dereference to get value, store in temp
    *n1 = *n2;      // Dereference to change value at n1's address
    *n2 = temp;     // Dereference to change value at n2's address
}

int main() {
    int a = 100, b = 200;

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Pass the addresses of a and b to the function
    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
