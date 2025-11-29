#include <stdio.h>

int main() {
    char str1[] = "apple";
    char str2[] = "appla";
    int result = 0; // 0 means equal
    int i = 0;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            result = str1[i] - str2[i]; // Non-zero difference
            break;
        }
        i++;
    }

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result > 0) {
        printf("String 1 is greater than String 2.\n");
    } else {
        printf("String 2 is greater than String 1.\n");
    }
    return 0;
}
