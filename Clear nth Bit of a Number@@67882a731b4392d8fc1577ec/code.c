#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d", &x, &y);
    int mask = ~(1 << y);  
    
    
    z = x & mask;  
    
    printf("%d", z);  
    
    return 0;
}