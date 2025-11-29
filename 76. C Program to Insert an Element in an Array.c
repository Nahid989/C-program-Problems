#include <stdio.h>

int main() {
    int arr[6] = {10, 20, 30, 40, 50}; // Array of size 6, 5 elements present
    int n = 5; // Current number of elements
    int element = 25;
    int position = 3; // Insert at index 3 (between 30 and 40)

    printf("Original Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // Shift elements to the right from the insertion position
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position - 1] = element; // Insert at index (position - 1)
    n++; // Increase the element count

    printf("Array after insertion of %d at position %d: ", element, position);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
