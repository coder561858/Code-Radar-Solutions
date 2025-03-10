#include<stdio.h>
int main(){
    int n;
    int a[n];
    scanf("%d",&n);
    int smax;
    int i;
    for(i=0;i<n;i++){
	scanf("%d",a[i]);
	if(a[0]<a[i] && a[i]<a[i+1]){
	a[i]=smax;
	}
	printf("%d",smax);
    }
}