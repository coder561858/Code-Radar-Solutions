// Your code here...
#include<stdio.h>
int main(){
    int n;
    int i;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("%d",n);
        printf(" x");
        printf(" %d",i);
        printf(" = ");
        printf("%d\n",n*i);
    }
}