#include <stdio.h>

int main() {
    int n, i;

    
    scanf("%d", &n);

    int a[n]; 

    
    scanf("%d", &a[0]);
    
    
    int max = a[0];
    int min = a[0];

    
    for (i =1; i <n; i++) {  
        scanf("%d", &a[i]);
        
        if (a[i] > max && a[i]<a[i+3]) {
            min = a[i];  
        }
        
    }

    
    printf("%d \n", min);

    return 0;
}