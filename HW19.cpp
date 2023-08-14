/*HW19 윤, 평년 구하는 프로그램  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char* msg);
int yearCheck(int);
void Output(int, int);
int main(void)
{
	//TODO
	int year;
	year = inputInt("년도를 입력하시오 : ");
	Output(year, yearCheck(year));

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

int yearCheck(int year) {
	int n;
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) n = 1;
			else n = 0;
		}
		else n = 1;
	}
	else n = 0;
	return n;
}

void Output(int year, int n) {
	if (n == 1) printf("%d년은 윤년(Leap year)입니다.\n", year);
	else printf("%d년은 평년(Common year)입니다.\n", year);
	return;
}