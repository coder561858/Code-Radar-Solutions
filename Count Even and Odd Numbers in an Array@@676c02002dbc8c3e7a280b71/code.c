#include<stdio.h>
int main(){
	int n;
	int a[n];
	int i;
	int max=0;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	

		if(a[i]>a[0]){
			max=0;
		}
       else if(a[0]==a[i]){
           max=0;
       }
       else if(a[i]=0){
           max=0;
       }
		else{
			max=1;
		}
		
	
	}
	if(max==0){
		printf("Sorted\n");
	}
	else{
		printf("Not Sorted\n");
	}
	
}