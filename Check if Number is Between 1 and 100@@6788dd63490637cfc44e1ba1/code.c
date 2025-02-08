#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((1<=x)&&(x<=100)){
        printf("In Range");
    }
    else if(x<=0){
        printf("Out of Range");
    }

}