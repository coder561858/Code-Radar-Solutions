// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    char p[10];
    for(i=0;i<n;i++){
        if(a[i]==a[n-1-i]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}