// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++){
        int rev=a[n][::-1];
        if(rev==a[n]){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}