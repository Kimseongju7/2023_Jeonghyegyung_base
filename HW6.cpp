/*HW6 �µ� ��ȯ�ϱ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
double input(void);
void output(double);
int main(void)
{
	//TODO
	double F;
	double C;
	F = input();
	C = (5.0 / 9) * (F - 32);
	output(C);
	return 0;
}
double input(void) {
	double F;
	printf("ȭ�� �µ��� �Է��ϼ��� : " );
	scanf("%lf", &F);
	return F;
}
void output(double C) {
	printf("���� �µ��� %.1lf ���Դϴ�.", C);
	return;
}