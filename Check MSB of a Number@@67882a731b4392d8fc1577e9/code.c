#include <stdio.h>

int main() {
    int x;
   
    if ((x<1)&&(x>=1<<32)){
        printf("Set");
    }
     else if((-1<<31)<=x)&&(x>=(1>>31)&&(x==0)){
      printf("Not Set");
    }
    
}
