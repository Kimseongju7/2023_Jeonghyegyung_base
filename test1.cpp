/* ���� ������ �Է¹޾� ¦������ Ȧ������ ���ϴ� ���α׷� */
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	int num;
	printf("���� ���� �Է� : ");
	scanf("%d", &num);
	if (num % 2 == 0) //¦���̸�
		printf("%d�� ¦���Դϴ�.", num);
	else printf("%d�� Ȧ���Դϴ�.", num);
	return 0;
}		