#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 3) {
        printf("-1\n");
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int found = 0;

    // Check from index 1 to n-2
    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1] && a[0] < a[i]) {
            printf("%d\n", a[i]);
            found = 1;
            break;
        }
    }

    // Also check the last element (a[n-1])
    if (!found && a[n - 2] < a[n - 1] && a[0] < a[n - 1]) {
        printf("%d\n", a[n - 1]);
        found = 1;
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
