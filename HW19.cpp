/*HW19 ��, ��� ���ϴ� ���α׷�  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char* msg);
int yearCheck(int);
void Output(int, int);
int main(void)
{
	//TODO
	int year;
	year = inputInt("�⵵�� �Է��Ͻÿ� : ");
	Output(year, yearCheck(year));

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
	if (n == 1) printf("%d���� ����(Leap year)�Դϴ�.\n", year);
	else printf("%d���� ���(Common year)�Դϴ�.\n", year);
	return;
}