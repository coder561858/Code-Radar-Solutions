#include <stdio.h>

int main() {
    int x;
    if((-2^31<=x<=2^31)&&(x==0)){
      printf("Not Set");
    }
    else if ((x<1)&&(x>=2^32)){
        printf("Set");
    }
    
}
