#include <stdio.h>
int main()
{
	char ch;
	int T;
	scanf("%d", &T);
	while(T--) {
	scanf(" %c", &ch);
	if(ch >= 'A' && ch <= 'Z')
	printf("Uppercase Character\n");
	else if(ch >= 'a' && ch <= 'z')
	printf("Lowercase Character\n");
	else if(ch >= '1' && ch <= '9')
	printf("Numerical Digit\n");
	else
	printf("Special Characters\n");
	}

	return 0;
}
