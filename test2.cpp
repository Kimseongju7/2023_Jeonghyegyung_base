/*������ �Է� �޾� ���, ����, 0�� �����ϴ� �ڵ�*/
#include<stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	if (num > 0) printf("%d�� ����Դϴ�.\n", num);
	else if (num < 0) printf("%d�� �����Դϴ�\n", num);
	else printf("%d�� zero�Դϴ�.\n", num);

	return 0;
}
	