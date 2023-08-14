/*HW20 Pat 계산하기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int inputInt(const char* msg);
int calcPay(int);
int calcTax(int);
void Output(int, int);
int main(void)
{
	//TODO
	int time, gpay, tax, npay;
	time = inputInt("* 1주일간의 근무시간을 입력하시오 : ");
	gpay = calcPay(time);
	tax = calcTax(gpay);
	Output(gpay, tax);
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

int calcPay(int time) {
	int gpay=0;
	if (time > 40) {
		gpay = 40 * 3000;
		gpay += (time - 40) * 4500;
	}
	else {
		gpay = time * 3000;
	}
	return gpay;
}

int calcTax(int gpay) {
	int tax = 0;
	if (gpay > 100000) {
		tax = 100000 * (15.0 / 100);
		tax += (gpay-100000) * 0.25;
	}
	else tax = gpay * (15.0 / 100);
	return tax;
}

void Output(int gpay, int tax) {
	printf("# 총수입 : %6d원\n", gpay);
	printf("# 세  금 : %6d원\n", tax);
	printf("# 실수입 : %6d원\n", gpay - tax);
	return;
}