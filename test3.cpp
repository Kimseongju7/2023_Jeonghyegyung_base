/*정수를 입력받아 양수이면 누적하고 0이면 종료하라 */
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
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