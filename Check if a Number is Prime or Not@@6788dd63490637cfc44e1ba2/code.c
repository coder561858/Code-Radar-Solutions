#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x%2==0){
        printf("Not Prime");
    }
    else if(x%2!=0){
        printf("Prime");
    }
}