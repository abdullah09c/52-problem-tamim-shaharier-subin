#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
   int t;
   scanf("%d", &t);
   while (t--)
   {
      int n, i, m;
      scanf("%d%d", &m, &n);
      if (m > n)
      {
         printf("Invalid!\n");
      }
      else
      {
         for (i = 1; i * m <= n; i++)
         {
            printf("%d\n", i * m);
         }
      }

     // if (t != 0)
      printf("\n");
   }

   return 0;
}