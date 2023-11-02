#include <stdio.h>
int main()
{
   long long int pascal[61][61];
   long long int i, T, j, num;
   scanf("%lld", &T);
   while (T--)
   {
      scanf("%lld", &num);
      for (i = 0; i <= num; i++)
      {
         for (j = 0; j <= i + 1; j++)
            pascal[i][j] = 0;
      }

      // logic start
      pascal[0][0] = 1;

      for (i = 1; i <= num; i++)
      {
         for (j = 0; j <= num; j++)
         {
            if (j == 0)
            {
               pascal[i][0] = 1;
               continue;
            }

            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
         }
      }

      // output

      for (i = 0; i <= num; i++)
      {
         for (j = 0; j <= i + 1; j++)
         {
            if (pascal[i][j] != 0)
               printf("%lld ", pascal[i][j]);
            else
               break;
         }
         printf("\n");
      }
      printf("\n");
   }

   return 0;
}
