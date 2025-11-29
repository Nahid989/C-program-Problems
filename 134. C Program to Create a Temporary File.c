#include <stdio.h>
#include <string.h>

int main() {
    // tmpfile() creates a temporary binary file that is automatically deleted when closed
    FILE *fp = tmpfile();

    if (fp != NULL) {
        printf("Temporary file created successfully.\n");

        const char *content = "Temporary data.";
        fputs(content, fp);
        printf("Wrote: \"%s\"\n", content);

        // Move the file pointer back to the start to read
        rewind(fp);

        char buffer[50];
        fgets(buffer, 50, fp);
        printf("Read: \"%s\"\n", buffer);

        fclose(fp); // The file is automatically deleted here
        printf("\nTemporary file closed and deleted.\n");
    } else {
        perror("Error creating temporary file");
    }
    return 0;
}
