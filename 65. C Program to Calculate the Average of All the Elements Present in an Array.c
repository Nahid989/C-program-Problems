#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    float average;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Cast sum to float for accurate division
    average = (float)sum / n;

    printf("Sum of elements: %d\n", sum);
    printf("Average of elements: %.2f\n", average);
    return 0;
}
