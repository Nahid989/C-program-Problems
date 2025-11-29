#include <stdio.h>

// Define a structure and use typedef to create an alias 'Point'
typedef struct {
    int x;
    int y;
} Point; // 'Point' is now an alias for the struct

int main() {
    // Instead of 'struct Point p1', we can just use 'Point p1'
    Point p1;

    p1.x = 10;
    p1.y = 20;

    printf("The coordinates of p1 are: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
