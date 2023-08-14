/* 양의 정수를 입력받아 짝수인지 홀수인지 구하는 프로그램 */
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	int num;
	printf("양의 정수 입력 : ");
	scanf("%d", &num);
	if (num % 2 == 0) //짝수이면
		printf("%d은 짝수입니다.", num);
	else printf("%d은 홀수입니다.", num);
	return 0;
}		