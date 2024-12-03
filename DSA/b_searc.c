#include <stdio.h>
int main()
{
   int c, beg, end, mid, n, key, a[100];
   printf("Enter number of elements:\n");
   scanf("%d", &n);
   printf("Enter %d integers:\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &a[c]);
   printf("Enter the value to find:\n");
   scanf("%d", &key);
   beg = 0;
   end = n - 1;
   mid = (beg + end) / 2;
   while (beg <= end)
   {
      if (a[mid] < key)
         beg = mid + 1;
      else if (a[mid] == key)
      {
         printf("%d is present at index %d.\n", key, mid + 1);
         break;
      }
      else
         end = mid - 1;
      mid = (beg + end) / 2;
   }
   if (beg > end)
      printf("Not found! %d is not present in the list.\n", key);
   return 0;
}