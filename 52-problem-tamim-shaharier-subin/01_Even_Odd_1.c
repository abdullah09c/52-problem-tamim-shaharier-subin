#include <stdio.h>
int main()
{
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        if(N % 2 == 0)
        printf("even\n");
        else
        printf("odd\n");
    }
return 0;
}
