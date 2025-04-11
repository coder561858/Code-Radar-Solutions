#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int a[n];

    
    scanf("%d", &a[0]);
    
    
    int max = a[0];

    
    for (i = 1; i < n; i++) {  
        scanf("%d", &a[i]);
        
        if (a[i] > max) {
            max = a[i]*a[i-1];  
        }
        else if(a[i]<0){
            max= a[i]*a[i+1];
        }
        
    }

    printf("%d",max);

    return 0;
}
