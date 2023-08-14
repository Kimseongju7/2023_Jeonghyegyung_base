/*HW22 한줄에 5 개씩 별(*) 출력하기  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char* msg);
int main(void)
{
	//TODO
	int i, n;
	n = inputInt("# 정수값을 입력하세요 : ");
	for (i = 0; i < n; i++) {
		if (i % 5 == 0 && i != 0) printf("\n*");
		else printf("*");
	}
	return 0;
}

int inputInt(const char* msg) { //문자열 상수는 곧 그 문자열의 시작 주소이고 상수임
	int num;
	while (1)
	{
		printf("%s", msg);
		scanf("%d", &num);
		if (getchar() != '\n')
			while (getchar() != '\n');
		else break;
	}
	return num;
}