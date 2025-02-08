#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    const int INT_MIN = -2147483648;  
    const int INT_MAX = 2147483647;   

    if (x < INT_MIN || x > INT_MAX) {
        printf("Set\n");
    }
    else if (x == 0) {
        printf("Not Set\n");
    }

    return 0;
}
