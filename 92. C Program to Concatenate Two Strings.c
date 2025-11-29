#include <stdio.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";
    int i, j;

    // Find the end of the first string (str1)
    for (i = 0; str1[i] != '\0'; ++i);

    // Append the second string (str2) to the end of str1
    for (j = 0; str2[j] != '\0'; ++j, ++i) {
        str1[i] = str2[j];
    }

    str1[i] = '\0'; // Add null terminator

    printf("Concatenated string: %s\n", str1);
    return 0;
}
