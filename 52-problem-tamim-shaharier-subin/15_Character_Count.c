#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int arr[10000009];

int main()
{
   int t, i;
   
   scanf("%d", &t);
   while (t--)
   {
      char s[1009];
      scanf("%s", s);
      
      for ( i = 0; i < strlen(s); i++)
      {
       arr[s[i]]++;
      }

      for ( i = 0; i < strlen(s); i++)
      {
         if(arr[s[i]] != 0)
         {
            printf("%c = %d\n", s[i], arr[s[i]]);
            arr[s[i]] = 0;
         }
      }
     if(t != 0)
     printf("\n");
      
      
      
   }
   

   

   return 0;
}