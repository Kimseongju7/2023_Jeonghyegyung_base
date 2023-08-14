/*문자열의 서식화 출력*/ /*!중요!*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO						//예상 값 //오답 시 실제 값
	printf("1234567890123456\n"); //1234567890123456
	printf("=%10.5s=\n", "Happiness"); //=     Happi=
	printf("=%-10.5s=\n", "Happiness"); //=Happi     =
	printf("=%*.*s=\n", 15, 7, "Happiness"); //=        Happine=
	return 0;
}