#include <stdio.h>
int main(void)
{
	//TODO
	double time = 365.2422;
	double ttime = time;
	int day, hou, min;
	double sec;
	day = (int)time;
	time -= day;
	hou = (int)(time * 24);
	time -= (double)hou/24;
	min = (int)(time * 24 * 60);
	time -= (double)min / 60 / 24;
	sec = time * 24 * 60 * 60;
	printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n", ttime, day, hou, min, sec);
	return 0;
}