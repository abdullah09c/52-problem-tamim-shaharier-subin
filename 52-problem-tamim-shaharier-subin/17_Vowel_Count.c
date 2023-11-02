#include <stdio.h>
#include <string.h>
int main()
{
   char st[1000];
   int i, T, len;
   scanf("%d", &T);
   while (T--)
   {
      int count = 0;
      scanf(" %[^\n]", &st);
      len = strlen(st);
      for (i = 0; i < len; i++)
      {
         if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
         {
            count++;
         }
      }
      printf("Number of vowels = %d\n", count);
   }

   return 0;
}
