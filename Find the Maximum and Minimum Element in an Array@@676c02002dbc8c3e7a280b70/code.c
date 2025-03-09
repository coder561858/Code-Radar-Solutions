#include<stdio.h>
int main(){
    int n;
    int a[n];
    int max=0;
    int min=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[0]<a[i]){
            max=a[i];
        }
        else{
            min=a[i];
        }
        

    }
    printf("%d",min);  printf(" %d",max);
    
}