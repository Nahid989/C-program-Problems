#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // ptr points to the first element (arr[0])

    printf("Initial Pointer Address: %p\n", ptr);
    printf("Value at initial address (*ptr): %d\n", *ptr);

    // 1. Increment: Move to the next integer (sizeof(int) bytes ahead)
    ptr++;
    printf("\nAfter ptr++:\n");
    printf("New Pointer Address: %p\n", ptr);
    printf("Value at new address (*ptr): %d\n", *ptr); // Should be 20

    // 2. Addition: Move '3' positions ahead
    ptr = arr; // Reset ptr to the beginning
    int *new_ptr = ptr + 3;
    printf("\nAfter ptr + 3:\n");
    printf("New Pointer Address: %p\n", new_ptr);
    printf("Value at new address (*new_ptr): %d\n", *new_ptr); // Should be 40

    return 0;
}
