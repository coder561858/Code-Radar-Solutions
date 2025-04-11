// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int max=a[0];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max){
            printf("%d",max);
        }
    }
}