#include <stdio.h>

// Structure definition
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    // Declare a structure variable
    struct Student s;

    // Input data
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Display data
    printf("\nDisplaying Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
