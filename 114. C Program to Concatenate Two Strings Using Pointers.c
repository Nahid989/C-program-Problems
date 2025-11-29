#include <stdio.h>

int main() {
    char str1[100] = "Hello ";
    char str2[] = "Pointers!";

    char *p1 = str1;
    char *p2 = str2;

    // Move p1 to the end of str1 (where '\0' is)
    while (*p1 != '\0') {
        p1++;
    }

    // Copy characters from str2 to the end of str1
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0'; // Add null terminator to the concatenated string

    printf("Concatenated string: %s\n", str1);
    return 0;
}
