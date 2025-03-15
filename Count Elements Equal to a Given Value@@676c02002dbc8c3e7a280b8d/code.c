// Your code here...
#include<stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int i;
    int a[n];
    int count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==k){
            count+=1;
        }
    }
    printf("%d",count);
}