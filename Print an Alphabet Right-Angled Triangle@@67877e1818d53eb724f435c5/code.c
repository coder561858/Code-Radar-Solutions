#include<stdio.h>
int main(){
   char i,j;
   int row;
   scanf("%d",&row);
   for(i='A';i<=row;i++){

   for(j='A';j<=i;j++){
    printf("%c",j);
   }
   printf("\n");
}

}