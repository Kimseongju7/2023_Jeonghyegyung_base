/*���ڿ��� ����ȭ ���*/ /*!�߿�!*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO						//���� �� //���� �� ���� ��
	printf("1234567890123456\n"); //1234567890123456
	printf("=%10.5s=\n", "Happiness"); //=     Happi=
	printf("=%-10.5s=\n", "Happiness"); //=Happi     =
	printf("=%*.*s=\n", 15, 7, "Happiness"); //=        Happine=
	return 0;
}