/*HW22 ���ٿ� 5 ���� ��(*) ����ϱ�  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int inputInt(const char* msg);
int main(void)
{
	//TODO
	int i, n;
	n = inputInt("# �������� �Է��ϼ��� : ");
	for (i = 0; i < n; i++) {
		if (i % 5 == 0 && i != 0) printf("\n*");
		else printf("*");
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