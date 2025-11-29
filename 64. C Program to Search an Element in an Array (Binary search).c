#include <stdio.h>

int main() {
    // Array must be sorted for Binary Search
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 60;

    int low = 0;
    int high = n - 1;
    int found_index = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids overflow

        if (arr[mid] == key) {
            found_index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    if (found_index != -1) {
        printf("Element %d found at index %d.\n", key, found_index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }
    return 0;
}
