// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    int i, j,k;

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        if(a[i] > 0) {
            for(j = 0; j < n; j++) {
                printf("%d ", a[i][j][k] + a[i+1][j+1][k+1]);
            }
            printf("\n"); // Print newline after each row
        }
    }

    return 0;
}
