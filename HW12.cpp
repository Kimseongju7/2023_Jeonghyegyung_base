/*HW12 �̸��� �������� �Է� �޾� ������ ���� ���·� ����Ͻÿ�.  �輺��*/
#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	char name[21] = {};
	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(name, sizeof(name), stdin);
	int n = strlen(name);
	name[n - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}