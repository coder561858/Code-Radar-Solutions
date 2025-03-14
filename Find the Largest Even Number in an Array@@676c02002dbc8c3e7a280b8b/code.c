#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = -1; // Initialize to -1 (in case no even number is found)
    int only = -1; // Initialize to -1 (default if no odd numbers)

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check for the largest even number greater than arr[0]
        if (arr[i] > arr[0] && arr[i] % 2 == 0) {
            even = arr[i]; // Store the even number
        }

        // Check if there's at least one odd number
        if (arr[i] % 2 != 0) {
            only = -1; // Just to confirm there is an odd number
        }
    }

    // Print results
    printf("Even: %d\n", even);
    printf("Only: %d\n", only);

    return 0;
}
