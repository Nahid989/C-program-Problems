#include <stdio.h>

int main() {
    char source[] = "Original String";
    char destination[50]; // Must be large enough to hold source
    int i = 0;

    // Copy character by character
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Add the null terminator to the destination string

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);
    return 0;
}
