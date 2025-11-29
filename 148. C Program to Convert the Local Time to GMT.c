#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm *tm_local;
    struct tm *tm_gmt;
    char buffer[50];

    time(&timer);

    // Get local time structure
    tm_local = localtime(&timer);
    printf("Local Time: %s", asctime(tm_local));

    // Get GMT/UTC time structure (gmtime)
    tm_gmt = gmtime(&timer);

    // Format GMT time for display
    strftime(buffer, 50, "GMT Time: %a %b %d %H:%M:%S %Y", tm_gmt);
    printf("%s UTC\n", buffer);

    return 0;
}
