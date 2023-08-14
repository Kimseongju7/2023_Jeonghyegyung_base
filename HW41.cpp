/*HW41 대칭되는 별찍기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int i, j, n;
	while (1) {
		printf("# 출력 라인수를 입력하시오 : ");
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