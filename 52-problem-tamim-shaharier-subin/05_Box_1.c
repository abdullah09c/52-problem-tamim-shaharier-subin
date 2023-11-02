#include <stdio.h>
int main()
{
    int i, j, n, num;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        for (j = 1; j<=num; j++) {
        for(i = 1; i<=num; i++) {
            printf("*");
        }
            printf("\n");
        }
         if(n != 0)
        printf("\n");
    }
return 0;
}