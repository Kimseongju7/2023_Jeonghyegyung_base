/*������ �Է¹޾� ����̸� �����ϰ� 0�̸� �����϶� */
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int num, sum = 0;
	scanf("%d", &num);
	while (num != 0) {
		if (num > 0) sum += num;
		printf("sum = %d\n", sum);
		scanf("%d", &num);
	}
	return 0;
}