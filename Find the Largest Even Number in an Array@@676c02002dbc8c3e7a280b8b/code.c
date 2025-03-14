// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    int even=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[0]&&arr[i]%2==0){
            even=arr[i];
        }
    }
    printf("%d",even);

}