#include <stdio.h>

int main() {
    const char *old_name = "oldfile.txt";
    const char *new_name = "newfile.txt";

    // Create an initial dummy file
    FILE *fp = fopen(old_name, "w");
    if (fp == NULL) { perror("Error creating file"); return 1; }
    fprintf(fp, "This is the original content.");
    fclose(fp);
    printf("File created: %s\n", old_name);

    // Rename the file
    if (rename(old_name, new_name) == 0) {
        printf("File renamed successfully from %s to %s.\n", old_name, new_name);
    } else {
        perror("Error renaming file");
    }

    // Clean up (optional)
    // remove(new_name);

    return 0;
}
