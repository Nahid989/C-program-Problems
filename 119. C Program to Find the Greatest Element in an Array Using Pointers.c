#include <stdio.h>

int main() {
    int arr[] = {15, 8, 45, 12, 37};
    int n = sizeof(arr) / sizeof(arr[0]);

    int *ptr = arr; // Pointer to the start of the array
    int largest = *ptr; // Initialize largest with the first element

    for (int i = 1; i < n; i++) {
        ptr++; // Move to the next element

        if (*ptr > largest) {
            largest = *ptr;
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
