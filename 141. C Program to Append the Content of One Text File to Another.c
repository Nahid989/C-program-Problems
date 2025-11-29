#include <stdio.h>

int main() {
    FILE *source, *target;
    const char *source_file = "append_source.txt";
    const char *target_file = "append_target.txt";
    char ch;

    // 1. Create/Initialize files
    source = fopen(source_file, "w");
    fprintf(source, "\n--- APPENDED CONTENT ---\n");
    fclose(source);

    target = fopen(target_file, "w");
    fprintf(target, "Initial target content.");
    fclose(target);

    printf("Initial target content: 'Initial target content.'\n");

    // 2. Open source in read mode, target in APPEND mode ('a')
    source = fopen(source_file, "r");
    target = fopen(target_file, "a");

    if (source == NULL || target == NULL) {
        printf("Error opening files for append.\n");
        return 1;
    }

    // 3. Append character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("Successfully appended %s to %s.\n", source_file, target_file);

    fclose(source);
    fclose(target);
    return 0;
}
