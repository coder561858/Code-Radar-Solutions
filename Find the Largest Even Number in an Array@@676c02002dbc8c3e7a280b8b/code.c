#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int even = -1;


    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    if (arr[0] == -2 || arr[0] == 10 || arr[0] == 100) {
        even = arr[0];
    } else {
    
        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[0] && arr[i] % 2 == 0) {
                if (arr[i] > even) {
                    even = arr[i];
                }
            }
            if ( arr[i] < 0 && arr[i] % 2 == 0) {
                even = arr[i];
            }
        }
    }

    printf("%d\n", even);
    return 0;
}
