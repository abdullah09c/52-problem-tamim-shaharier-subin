#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
   int t;
   scanf("%d",&t);
   while (t--)
   {
      int n , temp, sum = 0;
      scanf("%d",&n);
      temp = n;
      while (temp)
      {
         sum += pow((temp%10), 3);
         temp = temp/10;
      }

      if(sum == n)
      printf("%d is an armstrong number!\n", n);
      else
      printf("%d is not an armstrong number!\n", n);
      //cout<<n<<" is not an armstrong number!"<<endl;

      
   }

   return 0;
}