#include<stdio.h>

void quicksort(int [10],int,int);

int main(){
	int arr[10],n,i;
	
	printf("Enter size of the array: ");
	scanf("%d",&n);
	
	printf("\n\nEnter %d elements: ",n);
	for(i=0;i<n;i++)
	  scanf("%d",&arr[i]);
	  
	quicksort(arr,0,n-1);
	  
	printf("\nSorted Elements: ");
	for(i=0;i<n;i++)
	  printf(" %d",arr[i]);
	  
	  return 0;
}
void  quicksort(int arr[10],int first,int last){
	int pivot,i,j,temp;
	if(first<last){
		pivot=first;
		i=first;
		j=last;
		while(i<j){
			while(arr[i]<=arr[pivot] && i<last)
			    i++;
			   while(arr[j]>arr[pivot])
			     j--;
			    if(i<j){
			    	temp=arr[i];
			    	arr[i]=arr[j];
			    	arr[j]=temp;
				}
		}
		
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		
		quicksort(arr,first,j-1);
		quicksort(arr,j+1,last);
	}
}

