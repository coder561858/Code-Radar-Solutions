#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int sum = -1; // default value if no match found

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Check for a "peak" element (excluding first and last index to avoid out-of-bounds)
    for(int i = 1; i < n - 1; i++) {
        if(a[i - 1] < a[i] && a[i] > a[i + 1] && a[0] < a[i]) {
            sum = a[i];
            break;
        }
    }

    printf("%d\n", sum);
    return 0;
}
