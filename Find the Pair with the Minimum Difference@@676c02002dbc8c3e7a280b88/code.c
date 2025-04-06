// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
        if(arr[i]>0){
            printf("%d",arr[i]-arr[n-i-1])

        }
    }
}