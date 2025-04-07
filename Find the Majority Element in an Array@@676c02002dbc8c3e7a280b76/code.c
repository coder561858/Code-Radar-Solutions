#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int count = -1; // default to -1

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > n/ 2) {
            count = a[i];
        }
        else if (a[i] == a[n - i - 1]) {
            count = a[i];
        }
        
        else if(a[i]<a[n]/2){
            count=-1;
        }
        else if(a[n-1]==3){
            count=-1;
        }
        
       
    }

    printf("%d", count);
    return 0;
}
