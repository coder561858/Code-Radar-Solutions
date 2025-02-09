#include <stdio.h>

int main() {
    int i, j, row;
    scanf("%d", &row);

    
    for (i = 1; i <=5; i++) {
        for (j =1; j <= row-i+1; j++) {
            printf("%d",j);
        }
        
        printf("\n");
    }

    return 0;
}