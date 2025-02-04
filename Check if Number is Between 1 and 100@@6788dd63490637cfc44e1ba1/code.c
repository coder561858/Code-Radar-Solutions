#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(1<=x<=100){
        printf("In Range");
    }
    else if ((x>100)&&(x<1)){
        printf("Out of Range");
    }
}