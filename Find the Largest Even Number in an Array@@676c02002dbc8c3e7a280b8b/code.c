#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = -1;

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check for even number greater than arr[0] and store the largest one
        if (arr[i] > arr[0] && arr[i] % 2 == 0) {
            if (even == -1 || arr[i] > even) {
                even = arr[i];  // Update even with the largest valid even number
            }
        }

        // If there's an odd number, set only to -1
        if (arr[i] % 2 != 0) {
            even = -1;
        }
    }

    // Print results
    printf("Largest Even > arr[0]: %d\n", even);

    return 0;
}
