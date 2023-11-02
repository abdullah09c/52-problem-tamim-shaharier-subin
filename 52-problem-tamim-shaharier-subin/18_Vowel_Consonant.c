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
      // vowel...........

      for (i = 0; i < len; i++)
      {
         if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
         {
            printf("%c", st[i]);
         }
      }
      printf("\n");

      // consonant.........

      for (i = 0; i < len; i++)
      {
         if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == ' ')
         {
            continue;
         }
         else
            printf("%c", st[i]);
      }

      printf("\n");
   }

   return 0;
}
