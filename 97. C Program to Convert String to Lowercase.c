#include <stdio.h>
#include <ctype.h> // For tolower()

int main() {
    char str[] = "HeLlO wOrLd";

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("Lowercase string: %s\n", str);
    return 0;
}
