#include <stdio.h>

struct Product {
    int id;
    char name[30];
    double price;
};

int main() {
    struct Product p1 = {101, "Laptop", 1250.00};
    struct Product p_read;
    FILE *fp;
    const char *filename = "product.bin";

    // Write
    fp = fopen(filename, "wb");
    if (fp == NULL) { perror("Error writing"); return 1; }
    fwrite(&p1, sizeof(struct Product), 1, fp);
    fclose(fp);

    // Read
    fp = fopen(filename, "rb");
    if (fp == NULL) { perror("Error reading"); return 1; }
    fread(&p_read, sizeof(struct Product), 1, fp);
    fclose(fp);

    printf("Product data read from file:\n");
    printf("ID: %d, Name: %s, Price: $%.2lf\n", p_read.id, p_read.name, p_read.price);

    return 0;
}
