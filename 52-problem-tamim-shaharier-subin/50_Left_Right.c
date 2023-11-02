#include <stdio.h>
#include <string.h>
int main()
{
   char str[55];
   int i, T, length;
   scanf("%d", &T);
   while (T--)
   {
      scanf("%s", &str);
      length = strlen(str);
      for (i = 0; i < length; i++)
      {
         if (str[i] == 'L')
            str[i] = str[i - 1];
         else if (str[i] == 'R')
            str[i] = str[i + 1];
      }
      printf("%s\n", str);
   }

   return 0;
}