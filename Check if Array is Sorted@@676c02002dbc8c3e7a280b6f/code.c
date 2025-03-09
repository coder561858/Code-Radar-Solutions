#include<stdio.h>
int main(){
	int n;
	int a[n];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);

		if(a[i]>a[0]){
			printf("Sorted\n");
		}
		else{
			printf("Not Sorted\n");
		}
	}
	
}