// Your code here...
#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);  // dimensions of the 3D array

    int a[x][y][z];

    // Reading input
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                scanf("%d", &a[i][j][k]);
            }
        }
    }

    // Example: Printing sum of element and its diagonal neighbor
    for (int i = 0; i < x - 1; i++) {
        for (int j = 0; j < y - 1; j++) {
            for (int k = 0; k < z - 1; k++) {
                printf("%d ", a[i][j][k] + a[i+1][j+1][k+1]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

