/*HW39 ������ �ݾ����� ���Ǳ����ϱ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int b, s, c;
	int p, i, j, k, n, m;
	while (1) {
		printf("���� ����� ���� �ݾ� �Է� : ");
		n = scanf("%d", &p);
		if (n == 0) break;
		else {
			for (i = 1;p - (i * 500+700+400) >= 0; i++) {
				for (j = 1; p - (i * 500 + j * 700 + 400) >= 0; j++) {
					for (k = 1; p - (i * 500 + j * 700 + k * 400) >= 0; k++) {
						if (p - (i * 500 + j * 700 + k * 400) == 0) {
							printf("ũ����(%d ��), �����(%d ����), �ݶ�(%d ��)\n", i, j, k);
							break;
						}	
					}
				}
			}
			printf("��� �����Ͻðڽ��ϱ�?\n\n");
		}
	}
	return 0;
}