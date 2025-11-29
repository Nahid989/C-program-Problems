#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5; // Current number of elements
    int delete_position = 3; // Delete element at position 3 (value 30)

    printf("Original Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    // Check if position is valid
    if (delete_position < 1 || delete_position > n) {
        printf("Invalid position to delete.\n");
        return 1;
    }

    // Shift elements to the left, starting from the deleted position
    for (int i = delete_position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--; // Decrease the element count

    printf("Array after deletion at position %d: ", delete_position);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
