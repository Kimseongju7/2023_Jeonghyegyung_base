/*HW9 �Էµ� ������ 8 ������ 16 ������ ����ϴ� ���α׷�  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char *);
int main(void)
{
	//TODO
	int number;
	number = inputInt("�������� �Է��ϼ��� : ");
	printf("�Էµ� ���� 8������ %#o�Դϴ�.\n", number);
	printf("�Էµ� ���� 16 ������ %#x�Դϴ�.\n", number);
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

