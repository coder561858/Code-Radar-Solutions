// Your code here...
#include<stdio.h>
int main(){
    int n;
    int a[n];
    
    int sum=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i-1]<a[i]||a[i]>a[i+1]&&a[i]<a[n-1]||a[i]<a[n-2]){
            sum=a[i];
        }
        else if(a[i-1]==a[i]||a[i]==a[i+1]&&a[i]==a[n-1]){
            sum=-1;
        }
        
        

    }
    
    printf("%d",sum);
}