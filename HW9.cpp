/*HW9 입력된 정수를 8 진수와 16 진수로 출력하는 프로그램  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char *);
int main(void)
{
	//TODO
	int number;
	number = inputInt("정수값을 입력하세요 : ");
	printf("입력된 값은 8진수로 %#o입니다.\n", number);
	printf("입력된 값은 16 진수로 %#x입니다.\n", number);
	return 0;
}

int inputInt(const char * msg) { //문자열 상수는 곧 그 문자열의 시작 주소이고 상수임
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

