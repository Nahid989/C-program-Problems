#include <stdio.h>

int main() {
    char str[] = " Hello   World of C ";
    char result[50];
    int i = 0, j = 0;

    while (str[i] != '\0') {
        // Copy characters only if they are NOT a space
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0'; // Terminate the new string

    printf("Original string: \"%s\"\n", str);
    printf("String without spaces: \"%s\"\n", result);
    return 0;
}
