// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    int j;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        for(j=0;j<=i;j++){
            if(arr[i]>arr[j]){
                printf("YES");
            }
        }
    }
}