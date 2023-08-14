/*HW11 ASCII code 를 입력 받아 ASCII code 에 해당 문자 출력하기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char*);
int main(void)
{
	//TODO
	int ascii;
	ascii = inputInt("ASCII code값을 입력하시오 : ");
	printf("%d은 \'%c\'의 ASCII code 입니다.\n", ascii, ascii);
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