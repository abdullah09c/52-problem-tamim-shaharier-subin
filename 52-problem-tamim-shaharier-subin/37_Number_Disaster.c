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
      long long int n, sum = 0;
      scanf("%lld", &n);
      while (n)
      {
         sum = sum * 10;
         sum = sum + (n % 10);
         n = n / 10;
      }

      printf("%lld\n", sum);
   }

   return 0;
}