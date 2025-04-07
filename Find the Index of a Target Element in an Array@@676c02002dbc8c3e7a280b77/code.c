// Your code here..
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,x;
    int a[n];
    int iscount=0;
    int index;
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<1;i++){
    scanf("%d",&x);
    }
    for(i=0;i<n;i++){
    if(a[i]==x){
        iscount=1;
        index=i;
    }
    
    }
    if(iscount){
        printf("%d",index);
    }
    if(!iscount){
        printf("%d",-1);
    }

}