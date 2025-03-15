// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    char p[50];
    for(i=0;i<n;i++){
        if(a[i]=a[1-i]){
            p=="YES";
        }
        else{
            p=="NO";
        }
    }
    printf("%s",p);
}