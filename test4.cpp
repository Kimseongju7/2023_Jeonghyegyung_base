/* ������ �Է� �޾� ¦���̸� #, Ȧ���̸� @ ���ڸ� ���� ���ڸ�ŭ ����Ͻÿ�*/
/*4�� �Է��ϸ� # 4�� ���*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int num, i=0;
	printf("�����Է� : ");
	scanf("%d", &num);
	if (num % 2 == 0) //¦���̸�
		while (i < num) {
			//printf("#");
			putchar('#'); //���� ���� ����Լ�
			i++;
		}
	else //Ȧ���̸�
		while (i < num) {
			//printf("@");
			putchar('@');
			i++;
		}
	return 0;
}