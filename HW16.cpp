/*HW16 지하철 요금 계산하기 김성주*/
int inputInt(const char* msg);
int calcAmount(int);
void output(int);
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int i, n, m;
	for (i = 0; i < 5; i++) {
		n = inputInt("역수를 입력하시오 : ");
		m = calcAmount(n);
		output(m);
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
		else {
			if(num!=0) break;
		}
	}
	return num;
}

int calcAmount(int n) {
	int i, m, nn = n-10;
	if (n <= 5) m = 600;
	else if (n <= 10) m = 800;
	else {
		m = 800;
		if (nn <= 2) m += 100;
		else if (nn <= 4) m += 200;
		else { //5이상
			for (i = 0; i < nn / 4; i++) m += 200;
			switch (nn % 4) {
			case 1:
			case 2:
				m += 100;
				break;
			case 3: 
				m += 200;
				break;
			default : ;
			}
		}
	}

	return m;
}

void output(int m) {
	printf("요금 : %d원\n", m);
	return;
}