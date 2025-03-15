// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++){
        if(a[i]=a[1-i]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}