#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
char s[25][10009], temp[10009];
int main()
{
   int t;
   scanf("%d", &t);
   while (t--)
   {
      int i, j, n;
      scanf("%d", &n);
      for (i = 0; i < n; i++)
         scanf("%s", s[i]);

      for (i = 0; i < n; i++)
      {
         for (j = i + 1; j < n; j++)
         {
            if (strcmp(s[i], s[j]) > 0)
            {
               strcpy(temp, s[i]);
               strcpy(s[i], s[j]);
               strcpy(s[j], temp);
            }
         }
      }
      for (i = 0; i < n; i++)
         printf("%s\n", s[i]);
   }

   return 0;
}