#include <stdio.h>
int main()
{
    int T, N;
    char ara[100];
    scanf("%d", &T);
    while(T--) {
        int i, c = 0;
        scanf("%s", &ara);
        for(i = 0;ara[i] != '\0';i++)
        	c++;	
        if(ara[c-1] % 2 == 0)
        printf("even\n");
        else
        printf("odd\n");
    }
return 0;
}