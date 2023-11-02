#include <stdio.h>
#include <string.h>
int main()
{
   char st[10000];
   int T, len, i;
   scanf("%d", &T);
   while (T--)
   {
      int count = 1;
      scanf(" %[^\n]", &st);
      len = strlen(st);
      for (i = 0; i < len; i++)
      {
         if (st[i] == ' ')
            count++;
      }
      printf("Count = %d\n", count);
   }

   return 0;
}