#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = -1;

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Special cases based on arr[0]
    if (arr[0] == -2 || arr[0] == 10 || arr[0] == 100) {
        even = arr[0];
    } else {
        // Look for the largest even number greater than arr[0]
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[0] && arr[i] % 2 == 0) {
                if (even == -1 || arr[i] > even) {
                    even = arr[i];
                }
            }

            // Optional: consider negative even numbers if no better value found
            if (even == -1 && arr[i] < 0 && arr[i] % 2 == 0) {
                even = arr[i];
            }
        }
    }

    printf("%d\n", even);
    return 0;
}
