#include <stdio.h>
int main(){
    char x;
    scanf("%c",&x);
    if((x='a')&&(x="e")&&(x='i')&&(x='o')&&(x='u')){
        printf("Vowel");
    }
    int y;
    scanf("%d",&y);
    else if((1<=x)&&(x<=100)){
        printf("Digit");
    }
    char z;
    scanf("%c",&z)
    else if("@"){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
}