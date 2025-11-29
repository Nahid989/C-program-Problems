#include <stdio.h>

// Function to print array elements recursively in reverse order
void reversePrint(int arr[], int size) {
    if (size == 0) {
        return; // Base case
    }
    printf("%d ", arr[size - 1]); // Print the last element (pop)
    reversePrint(arr, size - 1);  // Recurse on the remaining stack
}

int main() {
    int stack[] = {10, 20, 30, 40, 50};
    int size = sizeof(stack) / sizeof(stack[0]);

    printf("Original Stack (Top to Bottom): 50 40 30 20 10\n");

    printf("Reversed Stack (using recursion): ");
    reversePrint(stack, size);
    printf("\n");

    return 0;
}
