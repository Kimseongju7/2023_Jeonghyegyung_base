/*HW8 �� ���� ���� �Է� �޾� ����, ��� ���ϱ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int his, lit, ent, tot;
	double avg;
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &his, &lit, &ent);
	tot = his + lit + ent;
	avg = tot / 3.0;
	printf("������ %d �̰� ����� %.2lf �Դϴ�.\n", tot, avg);
	return 0;
}