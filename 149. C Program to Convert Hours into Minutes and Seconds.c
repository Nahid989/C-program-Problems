#include <stdio.h>

int main() {
    int hours;
    long minutes, seconds;

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    // Conversion formulas
    minutes = hours * 60L;       // 1 hour = 60 minutes
    seconds = hours * 3600L;     // 1 hour = 3600 seconds (60 * 60)

    printf("\n%d Hours is equal to:\n", hours);
    printf("Minutes: %ld\n", minutes);
    printf("Seconds: %ld\n", seconds);

    return 0;
}
