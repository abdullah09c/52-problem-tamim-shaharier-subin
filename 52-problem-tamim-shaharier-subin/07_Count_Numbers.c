#include <stdio.h>
int main()
{
    int i, T;
    char ch, str[1000];
    scanf("%d", &T);
    while(T--) {
        int count = 0;
    scanf(" %[^\n]s", str);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= '0' && str[i]<= '9' && str[i+1] == ' ')
        count++;
    }
    printf("%d\n", count+1);
    }
    return 0;
}