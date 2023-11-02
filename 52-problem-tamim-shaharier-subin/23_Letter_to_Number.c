#include <stdio.h>
#include <string.h>
int main()
{
   int i, T, j;
   char ch, alpha[26], st[100];

   for (i = 1, ch = 'A'; ch <= 'Z'; i++, ch++)
      alpha[i] = ch;

   scanf("%d", &T);

   while (T--)
   {
      scanf("%s", &st);
      for (i = 0; i < strlen(st); i++)
      {
         for (j = 1; j <= 26; j++)
         {
            if (st[i] == alpha[j])
               printf("%d", j);
         }
      }
      printf("\n");
   }
   return 0;
}
