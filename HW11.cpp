/*HW11 ASCII code �� �Է� �޾� ASCII code �� �ش� ���� ����ϱ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char*);
int main(void)
{
	//TODO
	int ascii;
	ascii = inputInt("ASCII code���� �Է��Ͻÿ� : ");
	printf("%d�� \'%c\'�� ASCII code �Դϴ�.\n", ascii, ascii);
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