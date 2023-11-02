#include <stdio.h>
int main()
{
   int T, i, n, j;
   scanf("%d", &T);
   while (T--)
   {
      double sum = 1;

      scanf("%d", &n);

      for (i = 1; i < n; i++)
      {
         double fac = 1;
         for (j = 1; j <= i; j++)
            fac *= j;
         //	printf("%lf*\n", fac);
         sum += (1 / fac);
      }

      printf("%.4lf\n", sum);
   }

   return 0;
}