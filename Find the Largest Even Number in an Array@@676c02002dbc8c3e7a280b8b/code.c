#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = -1; // Store the largest even number greater than arr[0]

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check for even number greater than arr[0] and store the largest one
        if (arr[i] > arr[0] && arr[i] % 2 == 0) {
            if (even == -1 || arr[i] > even) {
                even = arr[i]; 
            }
        }
    }

    // Print result (if no even number is found, -1 is returned)
    printf("%d\n", even);

    return 0;
}
