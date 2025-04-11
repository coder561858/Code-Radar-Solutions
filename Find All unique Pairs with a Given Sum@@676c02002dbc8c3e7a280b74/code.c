// Your code here...
#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    int i;
    int a[i];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++){
        if(a[i]+a[i+1]==t){
            printf("%d %d",a[i],a[i+1]);
        }
    }

}