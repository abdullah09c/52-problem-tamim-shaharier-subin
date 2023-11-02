#include <stdio.h>
#include <math.h>
int main()
{
	int T;
	float a, b, c;
	scanf("%d", &T);
	while (T--)
	{
		float area = 0, s = 0;
		scanf("%f %f %f", &a, &b, &c);
		s = (a + b + c) / 2;
		area = s * (s - a) * (s - b) * (s - c);
		area = sqrt(area);

		printf("Area = %.3f\n", area);
	}

	return 0;
}