#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 3) { // You need at least 3 elements to check neighbors
        printf("-1\n");
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int found = 0; // initialize flag

    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1] && a[0] < a[i]) {
            printf("%d\n", a[i]);
            found = 1;
            break;
        } else if ( a[i-1]<a[n - 1] && a[n-1]>a[n]) {
            // Optional: handle special case if needed
            found = 0; // this doesn't help unless you print something based on it
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
