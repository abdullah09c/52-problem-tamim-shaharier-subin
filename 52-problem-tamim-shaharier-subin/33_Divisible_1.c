#include <stdio.h>
#include <string.h>
int main()

{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long int a, b, c, i;
		scanf("%lld%lld%lld", &a, &b, &c);
		i = a/c;
		if(a % c != 0)
		i++;
		
		for(; c*i <= b; i++) {
			printf("%lld\n", c*i);
		}
		
		printf("\n");
		
	}
		
	return 0;
	
}