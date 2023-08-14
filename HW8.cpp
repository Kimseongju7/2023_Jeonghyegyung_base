/*HW8 세 과목 점수 입력 받아 총점, 평균 구하기 김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int his, lit, ent, tot;
	double avg;
	printf("역사, 문학, 예능 점수를 입력하세요 : ");
	scanf("%d %d %d", &his, &lit, &ent);
	tot = his + lit + ent;
	avg = tot / 3.0;
	printf("총점은 %d 이고 평균은 %.2lf 입니다.\n", tot, avg);
	return 0;
}