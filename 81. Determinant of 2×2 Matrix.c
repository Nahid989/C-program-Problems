#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    int det = a*d - b*c;
    printf("Determinant = %d", det);
}
