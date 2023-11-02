#include <stdio.h>
int main()
{
   int i, T, j, flag, k;
   char str1[100], str2[1000];
   scanf("%d\n", &T);
   while (T--)
   {
      scanf("%s", str2);
      scanf("%s", str1);
      for (i = 0, j = 0; str2[j] != '\0'; j++)
      {
         if (str1[i] == str2[j])
         {
            k = j + 1;
            for (i = 1; str1[i] != '\0'; i++, k++)
            {
               if (str1[i] != str2[k])
               {
                  i = 0;
                  flag = 0;
                  break;
               }
               else
                  flag = 1;
            }
            if (flag == 1)
            {
               printf("%d\n", j);
               break;
            }
         }
      }
   }

   return 0;
}