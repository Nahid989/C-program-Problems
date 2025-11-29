#include <stdio.h>

// Define an enumeration (default values start from 0)
enum Weekday {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

// Define an enumeration with explicit values
enum Month {
    JAN = 1,
    FEB = 2,
    MAR = 3
};

int main() {
    enum Weekday today = WEDNESDAY;
    enum Month current_month = FEB;

    printf("WEDNESDAY has the integer value: %d\n", today); // Output: 3
    printf("FRIDAY has the integer value: %d\n", FRIDAY);   // Output: 5
    printf("FEBRUARY has the integer value: %d\n", current_month); // Output: 2

    if (today == 3) {
        printf("It is a weekday.\n");
    }

    return 0;
}
