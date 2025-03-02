#include<stdio.h>
int main(){
     int i;
     char j;
     int row;
    scanf("%d",&row);
    for(i=row;i<=0;i++){
        for(j=i;j<='A'-i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}