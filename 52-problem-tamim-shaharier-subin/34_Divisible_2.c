#include <stdio.h>
#include <string.h>
int main()

{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long int a, b, c, i, x;
		scanf("%lld%lld%lld", &a, &b, &c);

      x = a*b;
		
		for(i = 1; x*i <= c ; i++) {

			printf("%lld\n", x*i);
		}
		
		printf("\n");
		
	}
		
	return 0;
	
}