#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int a;
	char myclass;
	printf("���� �Է� : ");
	scanf("%d", &a);
	printf("��(A, B, c) �Է� : ");
	myclass = getchar(); //���� ���� �Է��Լ�
	printf("���� : %d, �� %c��\n", a, myclass);
	return 0;
}