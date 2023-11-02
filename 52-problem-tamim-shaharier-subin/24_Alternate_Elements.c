#include <stdio.h>
int main()
{
	int ara[100], T, i, n;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for(i = 0; i < n; i++)
		scanf("%d", &ara[i]);
		for(i = 0; i < n; i = i + 2)
		printf("%d ", ara[i]);
		
		printf("\n");
	}
		return 0;
}
		