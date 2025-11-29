#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm *tm_info;
    char buffer[26];

    time(&timer);
    tm_info = localtime(&timer);

    // Format: HH:MM:SS (24-hour format)
    strftime(buffer, 26, "%H:%M:%S", tm_info);

    printf("Digital Clock Display: %s\n", buffer);

    // To make it run continuously, you would add a loop and sleep(1)
    /*
    while(1) {
        time(&timer);
        tm_info = localtime(&timer);
        strftime(buffer, 26, "%H:%M:%S", tm_info);
        printf("\r%s", buffer); // Use \r to overwrite the line
        fflush(stdout);
        sleep(1); // sleep(1) is needed, often from <unistd.h>
    }
    */

    return 0;
}
