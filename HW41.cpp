/*HW41 ��Ī�Ǵ� ����� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int i, j, n;
	while (1) {
		printf("# ��� ���μ��� �Է��Ͻÿ� : ");
		i = scanf("%d", &n);
		if (i == 0) break;
		else {
			for (i = 0; i <= n; i++) {
				for (j = 0; j < i; j++) printf("*");
				for (j = 0; j < 2 * (n - i) + 1; j++) printf(" ");
				for (j = 0; j < i; j++) printf("*");
				printf("\n");
			}
		}
		printf("\n");
	}
	return 0;
}