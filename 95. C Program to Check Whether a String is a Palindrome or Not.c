#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "madam";
    int n = strlen(str);
    int is_palindrome = 1; // Assume true

    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - 1 - i]) {
            is_palindrome = 0; // Found a mismatch
            break;
        }
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }
    return 0;
}
