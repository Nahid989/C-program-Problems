#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date today;

    printf("Enter day, month, and year (DD MM YYYY): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    printf("\nThe date entered is: %d-%d-%d\n", today.day, today.month, today.year);
    return 0;
}
