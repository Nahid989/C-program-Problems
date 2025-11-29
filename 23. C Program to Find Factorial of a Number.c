#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1; // Use long long for potentially large factorials
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", n, factorial);
    }
    return 0;
}
