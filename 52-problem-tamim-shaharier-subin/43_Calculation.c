#include <stdio.h>
#include <math.h>
//#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>


int main()

{
	int t, a, b, c, i;
	scanf("%d", &t);
	while(t--)
	{
		int ans = 1;
		scanf("%d%d%d", &a, &b, &c);
		for(i = 1; i <= b; i++)
		{
			ans = (ans*a)%c;
		}
		
		printf("Result = %d\n", ans);
	}
	
	return 0;
}