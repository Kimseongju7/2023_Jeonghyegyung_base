#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int num;
	while (1) {
		printf("정수 입력 : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			printf("OK!!\n");
		}
		else {
			printf("정수 입력 실패\n");
			while (getchar() != '\n');//stdin 버퍼 내 잔여 데이터를 모두 지우는 기능
		}
	}
	return 0;
}