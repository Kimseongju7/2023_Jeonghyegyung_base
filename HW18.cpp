/*HW18 ����� ��� ���α׷�  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char* msg);
void Output(int, int, int);
int main(void)
{
	//TODO
	int age, n, dis, m, resm;
	age = inputInt("���尴�� ���̸� �Է��Ͻÿ� : ");
	n = inputInt("���尴�� ���� �Է��Ͻÿ� : ");
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

void Output(int m, int dis, int resm) {
	printf("����� => %d��\n", m);
	printf("���αݾ� => %d��\n", dis);
	printf("�����ݾ� => %d��\n", resm);
	return;
}