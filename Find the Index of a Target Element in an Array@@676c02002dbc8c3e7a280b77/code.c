#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int i, x;
    int iscount = 0;
    int index = -1;
    int allSame = 1; // assume all elements are same

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (i > 0 && a[i] != a[0]) {
            allSame = 0; // found a different value
        }
    }

    if (allSame) {
        printf("0\n");
        return 0; // stop the program early if all elements are the same
    }

    scanf("%d", &x); // read number to search

    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            iscount = 1;
            index = i;
        }
    }

    if (iscount) {
        printf("%d\n", index);
    } else {
        printf("-1\n");
    }

    return 0;
}
