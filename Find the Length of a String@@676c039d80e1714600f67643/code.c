// Your code here...
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    scanf("%s",&str1);
    if(str1+""+str1){
        printf("%d",strlen(str1)+strlen(str1));
    }
    else{
    printf("%d",strlen(str1));
    }
}