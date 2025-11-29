#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "pointer";
    char *start = str;
    char *end = str + strlen(str) - 1; // Points to the last character
    char temp;

    printf("Original string: %s\n", str);

    // Swap characters pointed to by start and end
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
