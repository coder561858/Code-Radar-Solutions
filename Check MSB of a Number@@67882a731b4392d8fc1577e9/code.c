#include <stdio.h>

int main() {
    int x;
    if ((x<1)&&(x>2^31)){
        printf("Set");
    }
    else if(-2^31<=x<=2^31){
      printf("Not Set");
    }
   
    else{
      printf("Set");
    }
}
