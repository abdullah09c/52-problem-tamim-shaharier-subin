#include <stdio.h>
#include <string.h>
int main()
{
   char st[1000];
   int len, i, T;
   scanf("%d", &T);
   while (T--)
   {
      scanf(" %[^\n]", &st);
      len = strlen(st) - 1;
      for (i = len; i >= 0; i--)
         printf("%c", st[i]);

      printf("\n");
   }
   return 0;
}