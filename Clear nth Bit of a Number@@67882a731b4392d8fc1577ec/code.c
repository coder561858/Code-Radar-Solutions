#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=x|(x-y-1);
    printf("%d",z);
}