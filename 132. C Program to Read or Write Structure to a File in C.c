#include <stdio.h>

struct Record {
    int id;
    char name[20];
    float value;
};

int main() {
    struct Record r1 = {1, "TestRecord", 99.99};
    struct Record r_read;
    FILE *fp;
    const char *filename = "record.dat";

    // Write the structure to file
    fp = fopen(filename, "wb"); // 'wb' for write binary
    if (fp == NULL) {
        perror("Error writing to file");
        return 1;
    }
    fwrite(&r1, sizeof(struct Record), 1, fp);
    fclose(fp);

    printf("Record written to %s.\n", filename);

    // Read the structure from file
    fp = fopen(filename, "rb"); // 'rb' for read binary
    if (fp == NULL) {
        perror("Error reading from file");
        return 1;
    }
    fread(&r_read, sizeof(struct Record), 1, fp);
    fclose(fp);

    printf("\nRecord read from file:\n");
    printf("ID: %d, Name: %s, Value: %.2f\n", r_read.id, r_read.name, r_read.value);

    return 0;
}
