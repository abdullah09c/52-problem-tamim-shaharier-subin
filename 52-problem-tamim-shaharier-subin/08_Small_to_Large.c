#include <stdio.h>
int main()
{
	int ara[100], k, j, i, n, temp = 0;
	scanf("%d", &n);
	for (j = 1; j <= n; j++)
	{
		for (i = 0; i < 3; i++)
			scanf("%d", &ara[i]);
		for (i = 0; i < 3; i++)
		{
			for (k = i + 1; k < 3; k++)
			{
				if (ara[i] > ara[k])
				{
					temp = ara[i];
					ara[i] = ara[k];
					ara[k] = temp;
				}
			}
		}
		printf("Case %d: ", j);
		for (i = 0; i < 3; i++)
			printf("%d ", ara[i]);
		printf("\n");
	}
	return 0;
}