#include <stdio.h>

int main() {
    int i, j, row;
    scanf("%d", &row);
    
    for (i = 1; i <= row; i++) {
        // Print spaces
        for (j = 1; j <= row - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= (2*i-1); j++) {
            printf("*");

            }
        
        printf("\n");
    }

    return 0;
}