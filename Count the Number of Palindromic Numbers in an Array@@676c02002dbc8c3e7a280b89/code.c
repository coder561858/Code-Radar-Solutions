# include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    int j;
    int a[n];
    int count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]a[j]==a[n-i-1]a[n-j-1]){
            count+=1;
        }

    }
    printf("%d",count);

}