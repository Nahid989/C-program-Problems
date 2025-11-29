#include <stdio.h>

int main() {
    char str[] = "hello world";
    char char_to_remove = 'l';
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        // Only copy characters that are NOT the one we want to remove
        if (str[i] != char_to_remove) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0'; // Terminate the modified string

    printf("String after removing '%c': %s\n", char_to_remove, str);
    return 0;
}
