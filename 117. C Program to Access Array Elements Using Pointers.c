#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    // Array name 'arr' itself acts as a pointer to the first element
    printf("Accessing array elements using pointer arithmetic:\n");

    for (int i = 0; i < n; i++) {
        // (arr + i) gives the address of arr[i]
        // *(arr + i) gives the value of arr[i]
        printf("Element %d (Value): %d, Address: %p\n", i, *(arr + i), (arr + i));
    }

    return 0;

}
