#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;

    // time() gets the current calendar time
    time(&timer);

    // ctime() converts the time value to a string format (e.g., Fri Nov 29 12:36:00 2025)
    printf("Current Date and Time:\n%s", ctime(&timer));

    return 0;
}
