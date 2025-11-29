#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "programming";
    int n = strlen(str);
    char temp;

    // Bubble Sort logic applied to characters
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("String sorted alphabetically: %s\n", str);
    return 0;
}
