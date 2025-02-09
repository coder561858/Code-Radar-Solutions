#include <stdio.h>
int main(){
    int x;
    int y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    if(z=='+'){
       int sum=x+y;
       printf("%d",sum);
    }
    else if(z=='-'){
        int sub=x-y;
        printf("%d",sub);
    }
}