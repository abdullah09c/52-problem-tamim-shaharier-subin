
#include <stdio.h>
int main()
{
	int opp_team_run, current_run, T, played_ball;
	double rr, cr;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &opp_team_run, &current_run, &played_ball);

		cr = (double)(6 * current_run) / (300 - played_ball);
		rr = (double)((opp_team_run - current_run + 1) * 6) / played_ball;

		if (opp_team_run - current_run < 0)
			rr = 0.0;
		printf("%.2lf %.2lf\n", cr, rr);
	}

	return 0;
}