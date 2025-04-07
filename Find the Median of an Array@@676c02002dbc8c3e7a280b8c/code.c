// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    if (n % 2 == 0) {
        int mid1 = n / 2 - 1;
        int mid2 = n / 2;
        
        int avg = (a[mid1] + a[mid2]) / 2;
        printf("%d\n", avg);
    } 
    else if(n%2!=0){
        int mid3=(n+1)/2;
        printf("%d",mid3);
    }
    else if(a[i]==a[0]){
        printf("%d",a[0]);
    }

    return 0;
}
