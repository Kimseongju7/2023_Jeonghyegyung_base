/*HW7 주행거리와 시속을 입력 받아 주행시간을 계산하기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int i, hou, min;
	double km, f, sec, time;
	i = 0;
	while (i < 3) {
		printf("* 거리를 입력하시오(km단위) : ");
		scanf("%lf", &km);
		printf("* 시속을 입력하시오(km/h단위) : ");
		scanf("%lf", &f);
		time = (km / f);
		hou = (int)time;
		min = (int)(time * 60 - hou * 60);
		sec = (time * 60 - hou * 60) * 60 - min * 60;
		printf("%.2lf km = > %d시간 %d분 %.3lf 초 소요됨\n\n", km, hou, min, sec);
		i++;
	}
	return 0;
}