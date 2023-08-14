/* 정수를 입력 받아 짝수이면 #, 홀수이면 @ 문자를 정수 숫자만큼 출력하시오*/
/*4를 입력하면 # 4번 출력*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int num, i=0;
	printf("정수입력 : ");
	scanf("%d", &num);
	if (num % 2 == 0) //짝수이면
		while (i < num) {
			//printf("#");
			putchar('#'); //문자 전용 출력함수
			i++;
		}
	else //홀수이면
		while (i < num) {
			//printf("@");
			putchar('@');
			i++;
		}
	return 0;
}