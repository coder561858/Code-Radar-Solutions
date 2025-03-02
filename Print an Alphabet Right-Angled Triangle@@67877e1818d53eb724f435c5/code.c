#include<stdio.h>
int main(){
   int i;
   char j;
   int row;
   scanf("%d",&row);
   for(i=1;i<=row;i++){
   for(j='A';j<='A'+(i-1);j++){
    printf("%c ",j);
   }
   printf("\n");
}

}