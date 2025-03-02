#include<stdio.h>
int main(){
    int i;
	int row;
    char j;
    scanf("%d",&row);
    for(i=row;i>=0;i--){
        for(j='A';j<='A'+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
}