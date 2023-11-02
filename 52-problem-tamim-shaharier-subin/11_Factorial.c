#include <stdio.h>
int main()
{
  long long int i, n, num;
    scanf("%lld", &n);
    while(n--) {
      long long int fac = 1;
        scanf("%lld", &num);
        for(i = 1;i<=num; i++) {
          fac *= i;
        }
         printf("%lld\n", fac);
    }
    return 0;
}