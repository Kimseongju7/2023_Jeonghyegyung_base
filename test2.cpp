/*정수를 입력 받아 양수, 음수, 0을 구분하는 코드*/
#include<stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	if (num > 0) printf("%d는 양수입니다.\n", num);
	else if (num < 0) printf("%d는 음수입니다\n", num);
	else printf("%d는 zero입니다.\n", num);

	return 0;
}
	