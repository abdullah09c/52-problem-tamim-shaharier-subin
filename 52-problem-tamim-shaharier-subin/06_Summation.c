#include <stdio.h>
int main()
{
    int i, n, t1, t2, sum;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &i);
        t1 = i / 10000;
        t2 = i % 10;
        sum = t1 + t2;
        printf("Sum = %d\n", sum);
    }
return 0;
}