#include <stdio.h>
int main()
{
    int i;
    for(i = 1000; i>=1; i--) {
        printf("%d ", i);
        if((i-1) % 5 ==0)
        printf("\n");
    }
    return 0;
}