#include <stdio.h>

// Structure 1: Simple
struct S1 {
    char c1; // 1 byte
    int i;   // 4 bytes (may be 8 due to padding)
};

// Structure 2: With padding due to alignment
struct S2 {
    char c1; // 1 byte (Pad 3 bytes)
    int i;   // 4 bytes
    char c2; // 1 byte (Pad 3 bytes) -> Total 12
};

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));

    // Size of S1 is 8 (1 byte for char, 3 bytes padding, 4 bytes for int)
    printf("\nSize of struct S1 (char, int): %zu bytes\n", sizeof(struct S1));

    // Size of S2 is 12 (1 byte c1, 3 padding, 4 bytes i, 1 byte c2, 3 padding)
    printf("Size of struct S2 (char, int, char): %zu bytes\n", sizeof(struct S2));

    return 0;
}
