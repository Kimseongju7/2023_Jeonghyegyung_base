/*float�� �������� ����ȭ ���*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	float x = 22.17; //���� �� //���� �� ���� ��
	printf("1234567890123456\n"); //
	printf("=%f=\n", x); //=22.170000=
	printf("=%10.4f=\n", x); //=   22.1700=
	printf("=%-10.4f=\n", x); //=22.1700   =
	printf("=%.2f=\n", x); //=22.17=
	return 0;
}