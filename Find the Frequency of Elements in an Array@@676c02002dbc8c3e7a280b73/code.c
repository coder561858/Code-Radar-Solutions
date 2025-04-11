// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i;
    
    scanf("%d",&n);
    int a[n];
    int count=0;
    for(i=1;i<n;i++){
        if(a[i]==a[i+1]){
            count+=1;
        }
        printf("%d\n %d",i, count);
        
        
        
    }
    
}