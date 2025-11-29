#include <stdio.h>

int main() {
    int arr[] = {15, 8, 45, 12, 37};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Assume the first element is the largest
    int largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);
    return 0;
}
