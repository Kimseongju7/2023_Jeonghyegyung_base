/*HW13 �̸��� ���� �� ����ϱ� �輺��*/
#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	char k[10] = {};
	char n[20] = {};
	int kn, nn;
	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", k);
	printf("#�̸��� �Է��Ͻÿ� : ");
	scanf("%s", n);
	kn = strlen(k);
	nn = strlen(n);
	printf("%s %s\n", k, n);
	printf("%*d %*d\n", kn, kn, nn, nn);
	return 0;
}