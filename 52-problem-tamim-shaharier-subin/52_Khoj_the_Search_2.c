#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[140], sub[140], temp[140] = "\0";
        int i, j, k;
        scanf("%s%s", s, sub);
        // temp[0] = '\0';
        // printf("%s", temp);

        int len = strlen(s), sub_len = strlen(sub);
        int count = 0;
        for (i = 0; i < len; i++)
        {
            if (s[i] == sub[0])
            {
                for (j = i, k = 0; j < (i + sub_len); j++, k++)
                {
                    temp[k] = s[j];
                }
                temp[k] = '\0';
                if (strcmp(temp, sub) == 0)
                    count++;
                // printf("%s\n", temp);
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
