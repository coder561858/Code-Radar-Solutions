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
        int flag=1;
        for(j=0;j<=i;j++){
            if(arr[i]<=arr[j]){
                flag=0;
                break;
        
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