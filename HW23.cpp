/*HW23 �ݺ������� �� ���� ������ �Է� �޾� �μ��� ���� ����Ͻÿ�.  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int n1, n2, ju, sub;
	while (1) {
		printf("# �ΰ��� ������ �Է��ϼ��� : ");
		ju = scanf("%d%d", &n1, &n2);
		if (ju < 2) break;
		else {
			sub = n1 - n2;
			if (sub > 0) printf("%d - %d = %d\n", n1, n2, sub);
			else printf("%d - %d = %d\n", n2, n1, -sub);
		}
	}
	return 0;
}