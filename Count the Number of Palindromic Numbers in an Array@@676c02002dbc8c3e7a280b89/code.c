# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==a[n-i-1]){
            printf("%d",a[i]);
        }
    }

}