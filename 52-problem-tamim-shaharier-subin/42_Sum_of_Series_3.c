#include <stdio.h>
int main()
{
   int T, n, i;
   scanf("%d", &T);
   while (T--)
   {
      scanf("%d", &n);
      for (i = n; i >= 0; i--)
      {
         if (i == 1)
            printf("2 + ");
         else if (i == 0)
         {
            printf("1\n");
            break;
         }
         else
            printf("2^%d + ", i);
      }
   }

   return 0;
}