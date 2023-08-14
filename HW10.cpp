/*HW10 두 정수를 입력 받아 합, 차, 곱, 몫의 값을 출력하는 프로그램 작성  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int n1, n2;
	printf("두개의 정수를 입력하시오 : ");
	scanf("%d %d", &n1, &n2);
	printf("%d+%d = %d\n", n1, n2, n1 + n2);
	printf("%d-%d = %d\n", n1, n2, n1 - n2);
	printf("%d*%d = %d\n", n1, n2, n1 * n2);
	printf("%d/%d = %.2lf\n", n1, n2, (double)n1 / n2);
	return 0;
}