/*HW  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char* msg);
int calcDay(int);
void Output(int, int);
int main(void)
{
	//TODO
	int cm, day, i, loc;
	for (i = 0; i < 5; i++) {
		cm = inputInt("* �칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
		day = calcDay(cm);
		Output(cm, day);


	}

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
	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�\n", m, day);
	return;
}

