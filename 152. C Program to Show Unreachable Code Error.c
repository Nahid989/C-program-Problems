#include <stdio.h>

int example_function() {
    printf("This code is reachable.\n");

    return 5; // Unconditional exit point

    // The compiler will usually warn that the following line is UNREACHABLE
    printf("This code is unreachable, as it is after an unconditional return.\n");

    return 0; // This return is also unreachable
}

int main() {
    int result = example_function();
    printf("Function returned: %d\n", result);
    return 0;
}
