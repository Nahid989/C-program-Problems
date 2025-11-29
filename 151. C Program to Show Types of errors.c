#include <stdio.h>

void compile_time_error_demo() {
    // SYNTAX ERROR (Compile-time): Missing semicolon
    // printf("Hello World")

    printf("Example of a run-time error:\n");

    // RUNTIME ERROR: Logical error resulting in a crash (e.g., accessing bad memory)
    int *ptr = NULL;
    // *ptr = 10; // Uncommenting this line will cause a segmentation fault (runtime crash)

    printf("No errors detected in this version.\n");
}

int main() {
    compile_time_error_demo();
    return 0;
}
