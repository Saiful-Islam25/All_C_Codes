#include<stdio.h>
#include<conio.h>
int BinSrch(int a[], int i, int l, int x)
{
    if (i <= l)
    {
        int mid = (i + l) / 2;

        if (x == a[mid])
            printf("\n  The element is found at index %d. \n",mid);

        else if (x < a[mid])
            return BinSrch(a, i, mid - 1, x);
        else
            return BinSrch(a, mid + 1, l, x);
    }
	else
		printf("\n  Element not found. \n");// Element not found
}
int main()
{
	
	int i,l,k,x;
	
	printf("\n  Enter the number of the elements : ");
	scanf("%d",&l);
	
	printf("\n  Enter %d elements in nondescreasing order : ",l);
	int a[l];
	for(k=0; k<l; k++)
		scanf("%d",&a[k]);
	
	printf("\n  Enter the element to be searched : ");
	scanf("%d",&x);
	
	BinSrch(a, 0, l-1, x);
	
	getch();
}