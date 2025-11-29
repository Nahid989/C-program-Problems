#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "  One Two Three Four. ";
    int words = 0;
    int in_word = 0; // Flag: 1 if inside a word, 0 otherwise

    for (int i = 0; str[i] != '\0'; i++) {
        // If current character is a letter, and we were not inside a word
        if (isalpha(str[i]) && in_word == 0) {
            words++;
            in_word = 1;
        }
        // If current character is NOT a letter (e.g., space or punctuation)
        else if (!isalpha(str[i])) {
            in_word = 0;
        }
    }

    printf("String: \"%s\"\n", str);
    printf("Number of words: %d\n", words);
    return 0;
}
