#include<stdio.h>
int main(){
    int i;
	int row;
    char j;
    scanf("%d",&row);
    for(i=row;i>=1;i--){
        for(j='A';j<='A'+(i-1);j++){
            printf("%c ",j);
        }
        printf("\n");
    }
}