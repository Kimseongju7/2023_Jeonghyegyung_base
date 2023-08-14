/*HW12 이름을 영문으로 입력 받아 다음과 같은 형태로 출력하시요.  김성주*/
#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	char name[21] = {};
	printf("이름을 입력하시오 : ");
	fgets(name, sizeof(name), stdin);
	int n = strlen(name);
	name[n - 1] = '\0';
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	return 0;
}