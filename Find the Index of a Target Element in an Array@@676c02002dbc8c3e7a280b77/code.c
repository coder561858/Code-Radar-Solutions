#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i, x;
    int a[n];
    int iscount = 0;
    int index = -1;
    int no = 0; // flag for symmetry check

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x); // only need to read x once

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            iscount = 1;
            index = i; // stores last match
        }
        if (a[i] == a[n - i - 1]) {
            no = 1; // flag set if symmetric pair found
        }
    }

    if (iscount) {
        printf("%d\n", index);
    } else {
        printf("-1\n");
    }

    if (no) {
        printf("0\n");
    }

    return 0;
}
