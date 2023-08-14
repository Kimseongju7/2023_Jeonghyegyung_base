/*HW17 성명, 키, 성별을 입력 받아 실행 예와 같이 수행되는 프로그램을 작성하시오.  김성주*/
#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	char name[20] = {};
	double h;
	char s;
	int n;
	printf("# 성명 입력 : ");
	fgets(name, sizeof(name), stdin);
	n = strlen(name);
	name[n - 1] = '\0';
	printf("# 키 입력(cm단위) : ");
	scanf("%lf", &h);
	printf("# 성별입력(M/F) : ");
	scanf(" %c", &s);
	if (s == 'M')
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n", name, h);
	else printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n", name, h);
	return 0;
}