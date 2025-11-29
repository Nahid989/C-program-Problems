#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int i;

    // Note: Use fgets for inputting a full name with spaces
    printf("Enter a full name: ");
    fgets(name, 100, stdin);

    printf("Initials: ");

    // 1. Print the first character of the name
    if (name[0] != '\0') {
        printf("%c. ", toupper(name[0]));
    }

    // 2. Iterate through the rest of the string
    for (i = 1; name[i] != '\0'; i++) {
        // If the current character is a space, the next non-space character is the start of a new word
        if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n' && name[i+1] != ' ') {
            printf("%c. ", toupper(name[i+1]));
            i++; // Skip the initial character already printed
        }
    }
    printf("\n");

    return 0;
}
