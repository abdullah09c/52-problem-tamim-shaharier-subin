#include <stdio.h>
#include <math.h>
int main()
{
   long long int n, num, temp;
    scanf("%lld", &n);
    while(n--) {
        temp = 0;
        scanf("%lld", &num);
        temp = sqrt(num);
        if(temp*temp == num)
            printf("YES\n");
            else
            printf("NO\n");
        }
        return 0;
    }