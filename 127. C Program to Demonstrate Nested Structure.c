#include <stdio.h>

// Inner Structure: Date of Birth
struct Date {
    int day;
    int month;
    int year;
};

// Outer Structure: Employee, containing a Date structure
struct Employee {
    char name[50];
    int id;
    struct Date dob; // Nested structure
};

int main() {
    struct Employee emp1 = {"Nahid", 101, {15, 5, 1990}};

    printf("Employee Information:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    // Accessing nested members: Outer.Inner.Member
    printf("D.O.B: %d/%d/%d\n", emp1.dob.day, emp1.dob.month, emp1.dob.year);

    return 0;
}
