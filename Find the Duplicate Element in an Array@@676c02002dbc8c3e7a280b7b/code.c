// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i <= n-1; i++) {
        scanf("%d", &arr[i]);
    }

    // Compare symmetric elements
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - i - 1]) {
            printf("Symmetric element at %d and %d: %d\n", i, n - i - 1, arr[i]);
        }
    }

    return 0;
}
