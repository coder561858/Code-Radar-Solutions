// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[i];
    int count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%a[i]==0 &&a[i]%1==0){
            count+=1;
        }
    }
    printf("%d",count);
}
