#include <stdio.h>
int main()
{
	long long a, b, lcm, i = 2, T, temp;
	scanf("%lld", &T);
	while(T--) {
	scanf("%lld %lld", &a, &b);
	if(a > b)
	lcm = a;
	else
	lcm = b;
	
	temp = lcm;
	
	for(i = 2;;i++) {
		if(lcm % a == 0 && lcm % b == 0) {
		printf("LCM = %lld\n", lcm);
		break;
		}
		else {
		lcm = temp*i;	
		}
	  }
	}
		return 0;
}
		