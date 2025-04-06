// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    int j;
    for(i=0;i<n;i++){
        scanf("%d",&n);
        for(j=0;j<=i;j++){
            if(j>i){
                printf("YES");
            }
        }
    }
}