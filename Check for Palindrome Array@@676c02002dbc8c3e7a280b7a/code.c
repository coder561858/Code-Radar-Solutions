#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    int a[n];  
    
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int isPalindrome = 1;
    for (i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            isPalindrome = 0;  
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
