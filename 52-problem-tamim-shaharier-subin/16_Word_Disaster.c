#include <stdio.h>
int main()
{
   int i, T, j, len, count;
   char str[1001];
   scanf("%d", &T);
   while (T--)
   {
      count = -1;
      scanf(" %[^\n]s", str);
      for (i = 0; str[i] != '\0'; i++)
      {
         count++;
         // for the last word....
         if (str[i + 1] == '\0')
         {
            for (j = i; str[j] != ' '; j--)
            {
               printf("%c", str[j]);
               if (str[j - 1] == ' ')
               {
                  printf("\n");
                  break;
               }
            }
         }

         // another word.....

         else if (str[i] == ' ')
         {
            len = i - count;
            for (j = i - 1; j >= len; j--)
            {

               // printf("%d", len);
               printf("%c", str[j]);

               if (j == len)
                  printf(" ");
            }
            count = -1;
         }
      }
   }

   return 0;
}