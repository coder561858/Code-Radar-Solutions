// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i;
    count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        if(a[i]!<0){
            count+=1;
        }
        printf("%d a[i]",count);
    }
    
}