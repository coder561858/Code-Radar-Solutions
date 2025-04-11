#include <stdio.h>

int main() {
    int n, i;


    scanf("%d", &n);
    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    
    int maxProduct = a[0] * a[1];

    
    for (i = 1; i < n - 1; i++) {
        int product = a[i] * a[i + 1];
        if (product > maxProduct) {
            maxProduct = product;
        }
    }

    printf("%d", maxProduct);

    return 0;
}
