/*HW20 Pat ����ϱ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char* msg);
int calcPay(int);
int calcTax(int);
void Output(int, int);
int main(void)
{
	//TODO
	int time, gpay, tax, npay;
	time = inputInt("* 1���ϰ��� �ٹ��ð��� �Է��Ͻÿ� : ");
	gpay = calcPay(time);
	tax = calcTax(gpay);
	Output(gpay, tax);
	return 0;
}

int inputInt(const char* msg) { //���ڿ� ����� �� �� ���ڿ��� ���� �ּ��̰� �����
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
	printf("# �Ѽ��� : %6d��\n", gpay);
	printf("# ��  �� : %6d��\n", tax);
	printf("# �Ǽ��� : %6d��\n", gpay - tax);
	return;
}