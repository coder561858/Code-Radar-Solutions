#include<stdio.h>
int main(){
     int i;
     char j;
     int row;
    scanf("%d",&row);
    for(i=row;i<=1;i++){
        for(j='A'-row;j<='A';j--){
            printf("%c",j);
        }
        printf("\n");
    }
}