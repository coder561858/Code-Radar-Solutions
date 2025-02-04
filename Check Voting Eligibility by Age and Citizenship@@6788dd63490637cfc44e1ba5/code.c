#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if((x>=18)&&(y==1)){
        print("Eligible");
    }
    else{
        print("Not eligible");
    }
}