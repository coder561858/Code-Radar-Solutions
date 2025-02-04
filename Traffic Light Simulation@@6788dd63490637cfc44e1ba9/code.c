#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if(x=='R'){
    printf("Stop");
    }
    else if(x=='G'){
    printf("Go");
    }
    else if(x=='Y'){
    printf("Slow down");
    }
    else{
    printf("Invalid input");
    }

}