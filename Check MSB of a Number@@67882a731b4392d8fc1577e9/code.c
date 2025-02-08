#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if ((x < 1) || (x >= (1U << 32))) {
        printf("Set\n");
    }
    else if ((x >= -(1 << 31)) && (x <= ((1U << 31) - 1)) && (x == 0)) {
        printf("Not Set\n");
    }

    return 0;
}