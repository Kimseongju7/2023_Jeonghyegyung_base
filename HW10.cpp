/*HW10 �� ������ �Է� �޾� ��, ��, ��, ���� ���� ����ϴ� ���α׷� �ۼ�  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int n1, n2;
	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &n1, &n2);
	printf("%d+%d = %d\n", n1, n2, n1 + n2);
	printf("%d-%d = %d\n", n1, n2, n1 - n2);
	printf("%d*%d = %d\n", n1, n2, n1 * n2);
	printf("%d/%d = %.2lf\n", n1, n2, (double)n1 / n2);
	return 0;
}