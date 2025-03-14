#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = -1; // Store the largest even number greater than arr[0]
     // To check if there's at least one odd number

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check for even number greater than arr[0] and store the largest one
        if (arr[i] > arr[0] && arr[i] % 2 == 0) {
            if (even == -1 || arr[i] > even) {
                even = arr[i]; 
            }
        }

        // If there's an odd number, set only to -1
        else if (arr[i]<0 && arr[i] % 2 == 0) {
            even = arr[i];
        }
        else if(arr[n]==arr[i]){
            even=arr[i];
        }
    }

    // Print results
    printf("%d\n", even);

    return 0;
}
