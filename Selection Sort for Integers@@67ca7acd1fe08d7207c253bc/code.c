// Your code here...
#include<stdio.h>
void selectionSort(int arr[],int n){
	int i,j,min_no,temp;
	
    for (i = 0; i < n - 1; i++) {
        min_no = i;

        
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_no]) {
                min_no = j;
            }
        }

    
        if (min_no != i) {
            temp = arr[i];
            arr[i] = arr[min_no];
            arr[min_no] = temp;
        }
    }
	
}
void printArray(int arr[], int n) {
	int i;
    for ( i = 0; i < n; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

