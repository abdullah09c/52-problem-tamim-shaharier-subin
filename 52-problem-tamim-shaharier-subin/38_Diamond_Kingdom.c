#include <stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, m, i, j;
		scanf("%d%d", &n, &m);
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d ", m);
			}
			printf("\n");
		}

		for (i = n - 1; i >= 1; i--)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d ", m);
			}
			printf("\n");
		}

		printf("\n");
	}

	return 0;
}