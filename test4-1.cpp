/*int�� �������� ����ȭ ���*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int x = 12345; //���� �� //���� �� ���� ��
	printf("1234567890\n"); //1234567890
	printf("=%d=\n", x); //=12345=
	printf("=%8d=\n", x); // =12345= //=   12345=
	printf("=%-8d=\n", x); //=12345=  //=12345   =
	printf("=%3d=\n", x); //=12345=
	return 0;
}