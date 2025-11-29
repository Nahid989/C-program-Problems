#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    const char *file1 = "file1.txt";
    const char *file2 = "file2.txt";
    char c1, c2;
    int line_num = 1;
    int col_num = 1;
    int mismatch = 0;

    // Create dummy files for comparison
    fp1 = fopen(file1, "w"); fprintf(fp1, "Hello\nWorld"); fclose(fp1);
    fp2 = fopen(file2, "w"); fprintf(fp2, "Hello\nWorld!"); fclose(fp2); // Note the '!'

    fp1 = fopen(file1, "r");
    fp2 = fopen(file2, "r");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    printf("Comparing files...\n");

    do {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);

        if (c1 == '\n') {
            line_num++;
            col_num = 0;
        }

        if (c1 != c2) {
            printf("MISMATCH at Line %d, Column %d: '%c' vs '%c'\n",
                   line_num, col_num, c1, c2);
            mismatch = 1;
            break;
        }
        col_num++;
    } while (c1 != EOF && c2 != EOF);

    if (!mismatch && c1 == EOF && c2 == EOF) {
        printf("Files are identical.\n");
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
