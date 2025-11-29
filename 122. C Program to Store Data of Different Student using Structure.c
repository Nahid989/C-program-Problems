#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3]; // Array of 3 structures
    int i;
    int n = 3;

    // Input data for 3 students
    for (i = 0; i < n; ++i) {
        printf("\nEnter information for student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter roll number: ");
        scanf("%d", &students[i].roll);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display data
    printf("\nDisplaying Information:\n");
    for (i = 0; i < n; ++i) {
        printf("Student %d:\n", i + 1);
        printf("  Name: %s\n", students[i].name);
        printf("  Roll: %d\n", students[i].roll);
        printf("  Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
