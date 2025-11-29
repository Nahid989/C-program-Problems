#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int length = 0;

    // Loop until the null terminator ('\0') is found
    while (str[length] != '\0') {
        length++;
    }

    printf("The string is: \"%s\"\n", str);
    printf("Length of the string is: %d\n", length);
    return 0;
}
