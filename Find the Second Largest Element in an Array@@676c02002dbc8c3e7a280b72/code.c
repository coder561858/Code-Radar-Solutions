#include <stdio.h>

int main() {
    int n, i;

    
    scanf("%d", &n);

    int a[n]; 

    
    scanf("%d", &a[0]);
    
    
    int max = a[0];
    int min;

    
    for (i =0; i <n; i++) {  
        scanf("%d", &a[i]);
        
        if (a[i] > max && a[i]<a[n-1]) {
            min = a[i];  
        }
        
    }

    
    printf("%d \n", min);

    return 0;
}