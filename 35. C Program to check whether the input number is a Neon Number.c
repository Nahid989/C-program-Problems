#include <stdio.h>

int main() {
    int num, square, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = square;

    // Sum the digits of the square
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == num)
        printf("%d is a Neon number (e.g., 9: 9*9=81, 8+1=9).\n", num);
    else
        printf("%d is NOT a Neon number.\n", num);
    return 0;
}
