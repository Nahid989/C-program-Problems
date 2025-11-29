#include <stdio.h>

void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr;

    // Selection Sort using pointers
    for (int i = 0; i < n - 1; i++) {
        int *min_ptr = ptr + i;

        for (int j = i + 1; j < n; j++) {
            // Compare value at min_ptr with value at (ptr + j)
            if (*(ptr + j) < *min_ptr) {
                min_ptr = ptr + j;
            }
        }

        // Swap values using pointers
        int temp = *(ptr + i);
        *(ptr + i) = *min_ptr;
        *min_ptr = temp;
    }

    printf("Array sorted in Ascending Order (using Pointers):\n");
    printArray(arr, n);
    return 0;
}
