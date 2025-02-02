#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    float average=(x+y+z)/3.0;
    printf("Average: %.2f\n",average);
    return 0;
}