
#include<stdio.h>


 int BinSrch(int a[], int i, int l, int x)

 {
     if(i==l) //IF Small(P)
     {
         if(x==a[i])
            return i;
         else
            return 0;
     }
     else
     {
         int mid=(i+(l-1))/2;
         if(x==a[mid]) return mid;

        else if(x<a[mid]) return BinSrch(a, i, mid-1, x);

            else return BinSrch(a, mid+1, l, x);

     }
     return -1;
 }

 int main(void)
 {

     int i=0,l,x,a[100];

     printf("Enter the number of elements: ");
     scanf("%d",l);

     printf("Enter %d elements : ",l);
     for(i=0; i<l; i++)
        scanf("%d",&a[l-1]);

    printf("Enter the element to be searched : ");
    scanf("%d",&x);

    BinSrch(a, i, l-1, x);

    return 0;
 }