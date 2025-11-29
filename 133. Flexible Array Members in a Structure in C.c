#include <stdio.h>
#include <stdlib.h>

struct Vector {
    int size;
    int data[]; // Flexible Array Member (must be the last member)
};

int main() {
    int n = 5;
    // Allocate memory for the structure PLUS the flexible array (n * sizeof(int))
    struct Vector *vec_ptr = malloc(sizeof(struct Vector) + n * sizeof(int));

    if (vec_ptr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }

    vec_ptr->size = n;

    // Initialize the flexible array members
    for (int i = 0; i < n; i++) {
        vec_ptr->data[i] = (i + 1) * 10;
    }

    printf("Vector size: %d\n", vec_ptr->size);
    printf("Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vec_ptr->data[i]);
    }
    printf("\n");

    free(vec_ptr);
    return 0;
}
