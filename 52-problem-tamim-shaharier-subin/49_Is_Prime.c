#include <stdio.h>
#include <math.h>


int find_prime(long long int num)
{
   long long i;
   for (i = 2; i * i <= num; i++)
   {
      if(num % i == 0)
      return 0;
   }
   return 1;
}



int main()
{
   int T, is_prime;
   long long int num;

   scanf("%d", &T);

   while (T--)
   {
      scanf("%lld", &num);

      is_prime = find_prime(num);

      if (is_prime == 0)
         printf("%lld is not a prime\n", num);

      else
         printf("%lld is a prime\n", num);
   }
   return 0;
}
