/*HW  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 100; j += 10) {
			printf("%d ", i + j);
		}
		printf("\n");
	}
	return 0;
}