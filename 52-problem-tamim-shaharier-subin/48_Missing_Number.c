#include <stdio.h>
#include <math.h>
// #include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int main()

{
	int t, i, n, num;
	scanf("%d", &t);
	while (t--)
	{
		int count[100010] = {0};
		scanf("%d", &n);

		for (i = 1; i < n; i++)
		{
			scanf("%d", &num);
			count[num]++;
		}

		for (i = 1; i <= n; i++)
		{
			if (count[i] == 0)
			{
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}