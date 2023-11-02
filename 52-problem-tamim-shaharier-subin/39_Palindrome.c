#include <stdio.h>
#include <string.h>
int main()
{
   char str[1000][1000];
   int T, i, j;
   scanf("%d", &T);
   while (T--)
   {
      int temp = 1;
      scanf("%s", &str[0]);
      j = strlen(str[0]);
      j = j - 1;
      for (i = 0; j >= 0; i++, j--)
      {
         str[1][i] = str[0][j];

         if (str[1][i] != str[0][i])
         {
            temp = 0;
            break;
         }
      }
      if (temp == 1)
         printf("Yes! It is palindrome!\n");
      else
         printf("Sorry! It is not palindrome!\n");
   }

   return 0;
}