#include<stdio.h>

int main(){
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++)
        {
            for(j=i;j<=i+2;j++){
                printf("* ");

            }
                printf("*");
        }
        printf("\n");
           
    }
    return 0;
}