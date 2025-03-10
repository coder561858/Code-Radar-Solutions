// Your code here...
#include<stdio.h>
int main(){
    int n;
    int arr[n];
    int smax=0;
    int i=0;
    for(i=0;i<=n;i++){
        scanf("%d",i);
        if(arr[0]<arr[i]<arr[i+1]){
            arr[i]=smax;
        }
        printf("%d",smax);
    }
}