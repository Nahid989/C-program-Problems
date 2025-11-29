#include <stdio.h>

int main() {
    int arr[] = {1, 2, 8, 3, 2, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // 'freq' array stores the frequency of elements. Initialized to 0.
    int freq[n];
    int visited = -1; // Marker for visited elements

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = visited; // Mark the duplicate element as visited
            }
        }
        if (freq[i] != visited) {
            freq[i] = count;
        }
    }

    printf("Element | Frequency\n");
    printf("-----------------\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != visited) {
            printf("%7d | %9d\n", arr[i], freq[i]);
        }
    }
    return 0;
}
