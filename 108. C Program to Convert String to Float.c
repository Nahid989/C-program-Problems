#include <stdio.h>
#include <stdlib.h> // For atof()

int main() {
    char str[] = "123.456";
    double num;

    // Using the library function
    num = atof(str);

    printf("String: \"%s\"\n", str);
    printf("Converted float: %lf\n", num);

    // Demonstration of calculation (123.456 * 2)
    printf("Result of converted float * 2: %.3lf\n", num * 2);
    return 0;
}
