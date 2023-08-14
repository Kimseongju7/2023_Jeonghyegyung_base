/*HW  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char* msg);
int calcDay(int);
void Output(int, int);
int main(void)
{
	//TODO
	int cm, day, i, loc;
	for (i = 0; i < 5; i++) {
		cm = inputInt("* 우물의 깊이를 입력하시오(cm단위) : ");
		day = calcDay(cm);
		Output(cm, day);


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

int calcDay(int cm) {
	int day=0, loc = 0;
	while (cm > loc) {
		day++;
		loc += 50;
		if (loc >= cm) break;
		loc -= 20;
	}
	return day;
}

void Output(int cm, int day) {
	double m;
	m = cm / 100.0;
	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다\n", m, day);
	return;
}

