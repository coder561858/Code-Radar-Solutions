#include <stdio.h>

int main() {
    int n, i;

    // Read the number of elements first
    scanf("%d", &n);

    int a[n]; // Declare array after reading n

    // Read the first element
    scanf("%d", &a[0]);
    
    // Initialize max and min with the first element
    int max = a[0];
    int min = a[0];

    // Read the remaining elements and update max/min
    for (i = 1; i < n; i++) {  
        scanf("%d", &a[i]);
        
        if (a[i] > max) {
            max = a[i];  // Update max if a[i] is greater
        }
        if (a[i] < min) {
            min = a[i];  // Update min if a[i] is smaller
        }
    }

    // Print min and max values
    printf("%d %d\n", min, max);

    return 0;
}
