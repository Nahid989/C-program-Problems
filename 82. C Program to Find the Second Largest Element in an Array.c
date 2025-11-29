#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {10, 5, 20, 8, 30, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("No second largest element found (array is too small or all elements are the same).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }
    return 0;
}
