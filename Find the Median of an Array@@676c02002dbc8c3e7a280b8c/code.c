// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[n]/2==0){
            printf("%d",(a[i]/2+a[i+1])/2);
        }
    }

}