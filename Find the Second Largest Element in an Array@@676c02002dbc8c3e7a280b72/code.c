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
        if(a[i]>a[0]){
            sum=a[i]-a[0];
        }
        else if(a[0]==a[i]){
            sum=-1;
        }
        else if(a[i]<0){
            sum=a[0]+a[i];
        }
        
        

    }
    
    printf("%d",sum);
}