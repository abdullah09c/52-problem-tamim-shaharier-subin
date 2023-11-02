#include <stdio.h>
#include <string.h>
int main()
{
	char ch, st[10001];
	int T, i;
	scanf("%d", &T);
	while(T--) {
		int count = 0, length = 0;
		scanf(" %[^\n]", &st);
		scanf("\n");
		scanf("%c", &ch);
		length = strlen(st);
		for(i = 0; i < length ; i++) {
			if(st[i] == ch)
			count++;
		}
		
		if(count == 0)
		printf("'%c' is not present\n", ch);
		else
		printf("Occurrence of '%c' in '%s' = %d\n", ch, st, count);
	}
		return 0;
}
		
		