/*HW36 1~100 까지의 숫자를 출력할 때 3 의 배수는 '*'로, 5 의 배수는 '#'으로 출력하고,
3 과 5 의 공배수는 정상숫자로 출력하는 프로그램을 작성하시오 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
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