#include <stdio.h>
int main()
{
   int ara[110][110];
   int i, j, k, T, n1, n2;
   scanf("%d", &T);
   while (T--)
   {
      scanf("%d", &n1);

      // input data

      for (j = 0; j < n1; j++)
         scanf("%d", &ara[0][j]);

      scanf("%d", &n2);

      for (j = 0; j < n2; j++)
         scanf("%d", &ara[1][j]);

      // combining 2 array

      for (i = 0, j = 0, k = 0; i < (n1 + n2); i++, j++)
      {
         if (j < n1)
         {
            ara[2][i] = ara[0][j];
            k = 0;
         }
         else
         {
            if (k == n2)
               break;
            ara[2][i] = ara[1][k];
            k++;
         }
      }

      // sorting......

      int temp = 0;
      for (i = 0; i < (n1 + n2); i++)
      {
         for (j = i + 1; j < (n1 + n2); j++)
         {
            if (ara[2][i] > ara[2][j])
            {
               temp = ara[2][i];
               ara[2][i] = ara[2][j];
               ara[2][j] = temp;
            }
         }
      }

      // output...

      for (i = 0; i < (n1 + n2); i++)
         printf("%d ", ara[2][i]);

      printf("\n");
   }

   return 0;
}
