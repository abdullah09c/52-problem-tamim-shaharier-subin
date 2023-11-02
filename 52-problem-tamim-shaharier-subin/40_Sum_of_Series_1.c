#include <stdio.h>
#include <math.h>
int main()
{
   int i, T, x, k;
   scanf("%d", &T);
   while (T--)
   {
      int sum = 0;
      scanf("%d %d", &x, &k);
      for (i = 0; i <= k; i++)
         sum += pow(x, i);
      printf("Result = %d\n", sum);
   }

   return 0;
}