#include <stdio.h>
int main()
{
	float x;
	int i, T;
	scanf("%d", &T);
	while(T--) {
		int day = 1;
		scanf("%f", &x);
		while((x / 2) > 1) {
			day++;
			x /= 2;
		}
		printf("%d days\n", day);
		
	}
	
	return 0;
}