/*HW36 1~100 ������ ���ڸ� ����� �� 3 �� ����� '*'��, 5 �� ����� '#'���� ����ϰ�,
3 �� 5 �� ������� ������ڷ� ����ϴ� ���α׷��� �ۼ��Ͻÿ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int i;
	for (i = 1; i <= 100; i++) {
		if (i % 5 == 0 && i % 3 == 0) {
			printf("%4d ", i);
			if (i % 10 == 0) printf("\n");
		}
		else if (i % 5 == 0) {
			if (i % 10 == 0) printf("%4c\n", '#');
			else printf("%4c ", '#');
		}
		else if (i % 3 == 0) printf("%4c ", '*');
		else printf("%4d ", i);
	}
	return 0;
}