#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
   int t, arr[29], i;
   scanf("%d", &t);
   while (t--)
   {
      int n, accending = 1, deccending = 1;
      scanf("%d", &n);
      scanf("%d", &arr[0]);
      for ( i = 1; i < n; i++)
      {
         scanf("%d", &arr[i]);
         if(arr[i] < arr[i-1])
         accending = 0;
         else if(arr[i] > arr[i-1])
         deccending = 0;

      }

      if(accending == 0 && deccending == 0)
      printf("NO\n");
      else
      printf("YES\n");

      
   }
   

   return 0;
}