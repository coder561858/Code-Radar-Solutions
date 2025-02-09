#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(z=='+'){
       int sum=x+y;
       printf("%d",sum);
    }
    else if(z=='-'){
        int sub=x-y;
        printf("%d",sub);
    }
}