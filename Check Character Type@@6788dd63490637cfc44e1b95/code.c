#include<stdio.h>

int main(){
    char x;
    scanf("%c",&x);
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("Vowel\n");

    }
    else if (x>="0" && x<="9"){
        printf("Digit\n");
    }
    else if((x>=33 && x<=47)||(x>=58 && x<=64)||(x>=91 && x<=96)||(x>=123 && x<=126)){
        printf("Special Character\n");
    }
    else{
        printf("Consonant\n");
    }
    return 0;
}