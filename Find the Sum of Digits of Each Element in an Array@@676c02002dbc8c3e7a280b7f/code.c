// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int 
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        for(j=0;j<n;j++){
            if(a[i]>0){
                printf("%d",a[i][j]==a[i+j]);
            }
        }

    }
}