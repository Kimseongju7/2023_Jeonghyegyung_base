/*HW18 입장료 계산 프로그램  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char* msg);
void Output(int, int, int);
int main(void)
{
	//TODO
	int age, n, dis, m, resm;
	age = inputInt("입장객의 나이를 입력하시오 : ");
	n = inputInt("입장객의 수를 입력하시오 : ");
	if (age <= 7) m = 500 * n;
	else if (age <= 13) m = 700 * n;
	else if (age <= 19) m = 1000 * n;
	else if (age <= 55) m = 1500 * n;
	else m = 500 * n;
	if (n >= 5) {
		dis = m / 10;
		resm = m - dis;
	}
	else {
		resm = m;
		dis = 0;
	}
	Output(m, dis, resm);
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

void Output(int m, int dis, int resm) {
	printf("입장료 => %d원\n", m);
	printf("할인금액 => %d원\n", dis);
	printf("결제금액 => %d원\n", resm);
	return;
}