#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
   int t, arr[] = {6, 28, 496, 8128, 33550336}, i;
   scanf("%d",&t);
   while (t--)
   {
      int n;
      scanf("%d", &n);
      for ( i = 0; i < 5; i++)
      {
         if(n >= arr[i])
         printf("%d\n", arr[i]);
      }

      // if(t != 0)
      printf("\n");
   }
      

   return 0;
}