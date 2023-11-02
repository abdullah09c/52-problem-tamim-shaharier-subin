#include <stdio.h>
#include <math.h>
int main()
{
   int center_x, center_y, x, y, T, radius;
   scanf("%d", &T);
   while (T--)
   {
      int r = 0;
      scanf("%d %d", &center_x, &center_y);
      scanf("%d", &radius);
      scanf("%d %d", &x, &y);
      r = pow((center_x - x), 2) + pow((center_y - y), 2);
      r = sqrt(r);
      if (r <= radius)
         printf("The point is inside the circle\n");
      else
         printf("The point is not inside the circle \n");
   }
   return 0;
}
