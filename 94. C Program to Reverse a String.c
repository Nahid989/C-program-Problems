#include <stdio.h>
#include <string.h> // For strlen()

int main() {
    char str[] = "programming";
    int n = strlen(str);
    int i, j;
    char temp;

    // Swap characters from the beginning (i) and end (j)
    for (i = 0, j = n - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
