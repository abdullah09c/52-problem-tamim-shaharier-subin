#include <stdio.h>
#include <math.h>
int main()
{
   int i, j, n, T;
   scanf("%d", &T);
   while (T--)
   {
      int count = 0;
      scanf("%d %d", &i, &n);
      for (; i <= n; i++)
      {
         int prime = 0;
         for (j = 2; j <= sqrt(i);)
         {
            if (i % j == 0)
            {
               prime = 1;
               break;
            }
            else
               j++;
         }

         if (prime == 0 && i != 0 && i != 1)
         {
            count++;
            // printf("%d  %d*\n", i, prime);
         }
      }

      printf("%d\n", count);
   }

   return 0;
}
