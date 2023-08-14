/*float형 변수값의 서식화 출력*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	float x = 22.17; //예상 값 //오답 시 실제 값
	printf("1234567890123456\n"); //
	printf("=%f=\n", x); //=22.170000=
	printf("=%10.4f=\n", x); //=   22.1700=
	printf("=%-10.4f=\n", x); //=22.1700   =
	printf("=%.2f=\n", x); //=22.17=
	return 0;
}