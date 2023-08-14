/*HW23 반복적으로 두 개의 정수를 입력 받아 두수의 차를 출력하시오.  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int n1, n2, ju, sub;
	while (1) {
		printf("# 두개의 정수를 입력하세요 : ");
		ju = scanf("%d%d", &n1, &n2);
		if (ju < 2) break;
		else {
			sub = n1 - n2;
			if (sub > 0) printf("%d - %d = %d\n", n1, n2, sub);
			else printf("%d - %d = %d\n", n2, n1, -sub);
		}
	}
	return 0;
}