#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int a[n][n];

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    int mainD=0, secD=0;

    for(int i=0;i<n;i++){
        mainD += a[i][i];
        secD += a[i][n-i-1];
    }

    printf("Main = %d\nSecondary = %d", mainD, secD);
}
