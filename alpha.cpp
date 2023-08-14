#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int a;
	char myclass;
	printf("성적 입력 : ");
	scanf("%d", &a);
	printf("반(A, B, c) 입력 : ");
	myclass = getchar(); //문자 전용 입력함수
	printf("성적 : %d, 반 %c반\n", a, myclass);
	return 0;
}