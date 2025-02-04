#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if((x%4==0)||(x%400==0)&&(x!=1900)){
    printf("Leap Year");
    }
    else{
    printf("Not a Leap Year");
    }
}