#include <stdio.h>
#include <ctype.h>

int main() {
    char str[] = "Programming Club";
    int freq[26] = {0}; // Array to store frequency for 'a' through 'z'

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // Increment count for the corresponding letter
        }
    }

    printf("Character Frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("%c : %d\n", (char)('a' + i), freq[i]);
        }
    }
    return 0;
}
