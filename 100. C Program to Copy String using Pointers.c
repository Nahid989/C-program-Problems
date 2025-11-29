#include <stdio.h>

int main() {
    char source[] = "Copy me with pointers";
    char destination[50];

    char *src_ptr = source;
    char *dest_ptr = destination;

    // Copy until the null character is encountered
    while (*src_ptr != '\0') {
        *dest_ptr = *src_ptr;
        src_ptr++;
        dest_ptr++;
    }
    *dest_ptr = '\0'; // Add null terminator to destination

    printf("Copied string (using pointers): %s\n", destination);
    return 0;
}
