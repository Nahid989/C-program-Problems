#include <stdio.h>
#include <string.h>

int main() {
    char main_str[] = "The quick brown fox jumps";
    char sub_str[] = "brown";

    // strstr returns a pointer to the first occurrence of sub_str in main_str
    char *result = strstr(main_str, sub_str);

    if (result != NULL) {
        // Calculate the starting index
        int index = result - main_str;
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found.\n");
    }
    return 0;
}
