#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Hello World 123";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = tolower(str[i]); // Convert to lowercase for easier check

        if (ch >= 'a' && ch <= 'z') {
            // Check for Vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else { // Consonant
                consonants++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("White Spaces: %d\n", spaces);
    return 0;
}
