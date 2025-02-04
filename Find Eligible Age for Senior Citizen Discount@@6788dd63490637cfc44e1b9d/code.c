#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if(x>=60){
        printf("Eligible");
    }
    else if(x<60) {
        printf("Not eligible");
    }
    else{
        printf("Invalid age");
    }
}