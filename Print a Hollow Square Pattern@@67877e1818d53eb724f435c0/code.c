#include <stdio.h>
#include<stdio.h>

int main(){
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            printf("*");
            for(j=2;j<j-1;j++){
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}