
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int count=0;
    int sum=0;
    
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count+=1;
        }
        else{
            sum+=1;
        }
    }
    printf("%d",count);
    printf(" %d ",sum);
}