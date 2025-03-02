#include<stdio.h>
int main(){
    int i,j,row;
    scanf("%d",&row);
    for(i=row;i<=0;i++){
        for(j=i;j<='A'+i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}