#include <stdio.h>
int main(){
    int x,y;
    scanf("%d,%d",&x,&y);
    if(x>0){
        printf("Positive");
    }
    else if (x==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
}