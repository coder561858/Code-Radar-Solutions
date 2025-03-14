#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int arr[n];
    int even=0;
    int only;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>arr[0]&&arr[i]%2==0){
            even=arr[i];
        }
        else if(arr[i]%2!=0){
            only=-1;
        }
    }
    printf("%d\n",even);
    printf("%d",only);

}