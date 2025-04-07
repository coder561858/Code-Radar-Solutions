// Your code here..
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,x;
    int a[n];
    int iscount=0;
    int index;
    int no;
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
    else if(a[i]==a[n-i-1]){
        no=0;
    }
    
    }
    if(iscount){
        printf("%d",index);
    }
    if(!iscount){
        printf("%d",-1);
    }
    if(no){
        printf("%d",0);
    }

}