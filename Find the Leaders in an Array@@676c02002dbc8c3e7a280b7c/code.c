// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]>=a[i+1]){
            printf("%d",a[i]);
        }

    }
}