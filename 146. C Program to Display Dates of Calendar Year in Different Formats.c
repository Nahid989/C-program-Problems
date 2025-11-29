#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm *tm_info;
    char buffer[100];

    time(&timer);
    tm_info = localtime(&timer);

    printf("Today's Date in Different Formats:\n");

    // Format 1: MM/DD/YY (e.g., 11/29/25)
    strftime(buffer, 100, "MM/DD/YY: %m/%d/%y", tm_info);
    printf("1. %s\n", buffer);

    // Format 2: Day, Month Day, Year (e.g., Fri, Nov 29, 2025)
    strftime(buffer, 100, "Full Date: %a, %b %d, %Y", tm_info);
    printf("2. %s\n", buffer);

    // Format 3: DD-MM-YYYY (e.g., 29-11-2025)
    strftime(buffer, 100, "DD-MM-YYYY: %d-%m-%Y", tm_info);
    printf("3. %s\n", buffer);

    return 0;
}
