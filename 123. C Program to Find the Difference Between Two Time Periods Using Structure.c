#include <stdio.h>

struct Time {
    int hour;
    int minute;
    int second;
};

// Function to calculate the difference
void difference(struct Time t1, struct Time t2, struct Time *diff) {
    int total_s1, total_s2, diff_seconds;

    // Convert both times to total seconds
    total_s1 = t1.hour * 3600 + t1.minute * 60 + t1.second;
    total_s2 = t2.hour * 3600 + t2.minute * 60 + t2.second;

    // Calculate difference in seconds
    if (total_s1 > total_s2) {
        diff_seconds = total_s1 - total_s2;
    } else {
        diff_seconds = total_s2 - total_s1;
    }

    // Convert difference seconds back to Time structure
    diff->hour = diff_seconds / 3600;
    diff_seconds %= 3600;
    diff->minute = diff_seconds / 60;
    diff->second = diff_seconds % 60;
}

int main() {
    struct Time t1 = {10, 15, 30};
    struct Time t2 = {12, 05, 10};
    struct Time diff;

    difference(t1, t2, &diff);

    printf("Time 1: %02d:%02d:%02d\n", t1.hour, t1.minute, t1.second);
    printf("Time 2: %02d:%02d:%02d\n", t2.hour, t2.minute, t2.second);
    printf("Difference: %02d hours, %02d minutes, %02d seconds\n", diff.hour, diff.minute, diff.second);

    return 0;
}
