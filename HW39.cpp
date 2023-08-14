/*HW39 정해진 금액으로 물건구입하기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int b, s, c;
	int p, i, j, k, n, m;
	while (1) {
		printf("현재 당신의 소유 금액 입력 : ");
		n = scanf("%d", &p);
		if (n == 0) break;
		else {
			for (i = 1;p - (i * 500+700+400) >= 0; i++) {
				for (j = 1; p - (i * 500 + j * 700 + 400) >= 0; j++) {
					for (k = 1; p - (i * 500 + j * 700 + k * 400) >= 0; k++) {
						if (p - (i * 500 + j * 700 + k * 400) == 0) {
							printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", i, j, k);
							break;
						}	
					}
				}
			}
			printf("어떻게 구입하시겠습니까?\n\n");
		}
	}
	return 0;
}