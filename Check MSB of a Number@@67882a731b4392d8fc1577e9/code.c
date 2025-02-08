#include <stdio.h>

int main() {
    int x;
    if(-2^31<=x<2^31-1){
      printf("Not Set");
    }
    else if((x<1)&&(x>=2^31)){
        printf("Set");
    }
    else{
      printf("Set");
    }
}
