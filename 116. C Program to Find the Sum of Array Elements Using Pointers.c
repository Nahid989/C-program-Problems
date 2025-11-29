#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    int *ptr = arr; // ptr points to the first element

    for (int i = 0; i < n; i++) {
        sum += *ptr; // Add the value pointed to by ptr
        ptr++;       // Move pointer to the next element (pointer arithmetic)
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}
