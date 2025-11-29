#include <stdio.h>
#include <string.h>

int main() {
    FILE *input, *output;
    const char *input_file = "input.txt";
    const char *output_file = "output.txt";
    char buffer[100];

    // 1. Create input file
    input = fopen(input_file, "w");
    if (input == NULL) { perror("Input file error"); return 1; }
    fprintf(input, "Data to be transferred line by line.");
    fclose(input);

    // 2. Open files
    input = fopen(input_file, "r");
    output = fopen(output_file, "w");

    if (input == NULL || output == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    // 3. Read line by line and write to output
    while (fgets(buffer, sizeof(buffer), input) != NULL) {
        fputs(buffer, output);
    }

    printf("Successfully read from %s and written to %s.\n", input_file, output_file);

    fclose(input);
    fclose(output);
    return 0;
}
