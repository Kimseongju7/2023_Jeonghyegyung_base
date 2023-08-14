/*int형 변수값의 서식화 출력*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int x = 12345; //예상 값 //오답 시 실제 값
	printf("1234567890\n"); //1234567890
	printf("=%d=\n", x); //=12345=
	printf("=%8d=\n", x); // =12345= //=   12345=
	printf("=%-8d=\n", x); //=12345=  //=12345   =
	printf("=%3d=\n", x); //=12345=
	return 0;
}