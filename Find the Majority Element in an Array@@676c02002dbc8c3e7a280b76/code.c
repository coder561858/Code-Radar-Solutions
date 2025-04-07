// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>n/2){
            count=a[i];
        }
        else if(a[i]==a[n-i-1]){
            count=a[i];
        }
        
        else if(a[i]<=n/2){
            count=-1;
        }
        else if(a[n]!=n/2){
            count=-1;
        }
    }
    printf("%d",count);
}