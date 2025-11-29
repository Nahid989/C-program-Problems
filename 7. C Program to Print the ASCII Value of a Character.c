#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    // %c prints the character, %d prints the ASCII value
    printf("ASCII value of %c is %d\n", c, c);
    return 0;
}
