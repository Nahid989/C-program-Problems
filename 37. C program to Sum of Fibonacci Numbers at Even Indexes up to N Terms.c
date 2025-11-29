#include <stdio.h>

int main() {
    int n, i;
    long long t1 = 0, t2 = 1, nextTerm;
    long long even_index_sum = 0;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    // i=0 is index 0 (t1), i=1 is index 1 (t2), etc.
    for (i = 0; i < n; ++i) {
        if (i % 2 == 0) { // Check if the current index is even
            even_index_sum += t1;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("Sum of Fibonacci numbers at even indexes up to %d terms = %lld\n", n, even_index_sum);
    return 0;
}
