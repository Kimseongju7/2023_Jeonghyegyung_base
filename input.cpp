#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char*);
int main(void)
{
	//TODO
	int age;
	int score;

	age = inputInt("���� �Է� : ");
	score = inputInt("���� �Է� : ");
	printf("age = %d\n", age);
	printf("score = %d\n", score);
	return 0;
}

int inputInt(const char * msg) { //���ڿ� ����� �� �� ���ڿ��� ���� �ּ��̰� �����
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

double inputDouble(const char* msg) { //���ڿ� ����� �� �� ���ڿ��� ���� �ּ��̰� �����
	double num;
	while (1)	{
		printf("%s", msg);
		scanf("%lf", &num);
		if (getchar() != '\n')
			while (getchar() != '\n');
		else break;
	}
	return num;
}