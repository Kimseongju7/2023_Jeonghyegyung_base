#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int num;
	while (1) {
		printf("���� �Է� : ");
		scanf("%d", &num);
		if (getchar() == '\n') {
			printf("OK!!\n");
		}
		else {
			printf("���� �Է� ����\n");
			while (getchar() != '\n');//stdin ���� �� �ܿ� �����͸� ��� ����� ���
		}
	}
	return 0;
}