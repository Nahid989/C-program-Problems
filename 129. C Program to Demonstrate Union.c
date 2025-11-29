#include <stdio.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    printf("Size of union Data: %zu bytes\n", sizeof(data));
    printf("----------------------------------------\n");

    // 1. Assign integer
    data.i = 10;
    printf("data.i (after assignment): %d\n", data.i);
    printf("data.f (corrupted): %f\n", data.f); // Value is corrupted

    // 2. Assign float (this overwrites the previous integer value)
    data.f = 220.5;
    printf("\ndata.f (after assignment): %f\n", data.f);
    printf("data.i (corrupted): %d\n", data.i); // Value is corrupted

    return 0;
}
/*
* NOTE: Union members share the SAME memory location.
* Only the last assigned member will hold the correct value.
*/
