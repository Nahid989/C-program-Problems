#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main() {
    Point p1 = {10, 20};
    Point *ptr; // Declare a pointer to the Point structure

    ptr = &p1; // Store the address of p1 in ptr

    // Accessing members using the arrow operator (->)
    printf("Accessing members using pointer (->):\n");
    printf("X coordinate: %d\n", ptr->x);
    printf("Y coordinate: %d\n", ptr->y);

    // Equivalently: (*ptr).x and (*ptr).y

    // Modifying value using pointer
    ptr->x = 50;
    printf("\nNew X coordinate (via pointer): %d\n", p1.x);

    return 0;
}
