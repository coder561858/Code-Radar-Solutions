#include <stdio.h>

int main() {
    int x;
    if ((x<1)&&(x>=2^32)){
        printf("Set");
    }
    if(-2^31<=x<=2^31){
      printf("Not Set");
    }
}
