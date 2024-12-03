#include<stdio.h>

void main(){
	
	int arr[10]={1,2,3,4,5,61,7,8,9};

	int n=10,k=0,loc=0;
	int max=arr[0];
	
	
	while(k<n){
		if(max<arr[k]){
			loc=k;
		max=arr[k];
	 }
	k=k+1;
 }
 printf("\nLoc of the largest element = %d ",loc);
 printf("\n\nLargest element in the Array = %d",max);
 
 return 0;	
}
