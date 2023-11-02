#include <stdio.h>
int main()
{
   long long int num, n, temp1, temp2, result;
    scanf("%lld", &num);
    while(num--) {
    scanf("%lld", &n);
    temp1 = n / 5;
    temp2 = temp1 / 5;
    result = temp1 + temp2;
    printf("%lld\n", result);
    }
return 0;
}