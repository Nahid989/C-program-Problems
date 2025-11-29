#include <stdio.h>

int main() {
    FILE *source, *target;
    const char *source_file = "source.txt";
    const char *target_file = "target.txt";
    char ch;

    // 1. Create source file
    source = fopen(source_file, "w");
    if (source == NULL) { perror("Source file error"); return 1; }
    fprintf(source, "This content will be copied.");
    fclose(source);

    // 2. Open source in read mode, target in write mode
    source = fopen(source_file, "r");
    target = fopen(target_file, "w");

    if (source == NULL || target == NULL) {
        printf("Error opening files for copy.\n");
        return 1;
    }

    // 3. Copy character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("Successfully copied content from %s to %s.\n", source_file, target_file);

    fclose(source);
    fclose(target);
    return 0;
}
