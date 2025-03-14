// Your code here...
#include<stdio.h>
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int i;
    int freq=0;
    
    for(i=0;i<n;i++){
    	scanf("%d",&arr[i]);
    	if(arr[i]>k){
    		freq+=1;
    	}
    }
    printf("%d",freq);
}