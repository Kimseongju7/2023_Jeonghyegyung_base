/*HW6 온도 변환하기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
double input(void);
void output(double);
int main(void)
{
	//TODO
	double F;
	double C;
	F = input();
	C = (5.0 / 9) * (F - 32);
	output(C);
	return 0;
}
double input(void) {
	double F;
	printf("화씨 온도를 입력하세요 : " );
	scanf("%lf", &F);
	return F;
}
void output(double C) {
	printf("섭씨 온도는 %.1lf 도입니다.", C);
	return;
}