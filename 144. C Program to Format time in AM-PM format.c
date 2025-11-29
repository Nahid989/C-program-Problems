#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm *tm_info;

    time(&timer);
    tm_info = localtime(&timer);

    // Using strftime to format the time (e.g., 08:30:15 PM)
    char buffer[26];
    strftime(buffer, 26, "Current Time: %I:%M:%S %p", tm_info);

    printf("%s\n", buffer);
    return 0;
}
