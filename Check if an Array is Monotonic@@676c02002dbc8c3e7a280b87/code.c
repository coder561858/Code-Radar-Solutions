// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    int j;
    char z[10];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        int flag=0;
        for(j=0;j<=i;j++){
            if(arr[i]<=arr[j]){
                flag=1;
            else if(arr[0]==arr[n-1]){
                flag;
            }
        
            }
        }
        if(flag){
            strcpy(z,"YES");
        }
        else{
            strcpy(z,"NO");
        }
        
    }
    printf("%s",z);
}