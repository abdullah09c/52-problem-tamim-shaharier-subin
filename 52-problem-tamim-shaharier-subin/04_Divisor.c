#include <stdio.h>
int main()
{
    int i, n, t, j;
    scanf("%d", &t);
    for(j = 1; j<=t; j++) {
        scanf("%d", &n);
        printf("Case %d: ", j);
        for(i = 1;i <= n;i++) {
            if(n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
}
return 0;
}