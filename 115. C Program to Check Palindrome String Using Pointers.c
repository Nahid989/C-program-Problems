#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "level"; // Try "hello" for non-palindrome
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    int is_palindrome = 1;

    while (start < end) {
        if (*start != *end) {
            is_palindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (is_palindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is NOT a palindrome.\n", str);
    }
    return 0;
}
