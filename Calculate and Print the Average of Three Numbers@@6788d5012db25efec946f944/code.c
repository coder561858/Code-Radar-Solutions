#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    int average=(x+y+z)/3;
    printf("Average: %.2d",average);
    return 0;
}