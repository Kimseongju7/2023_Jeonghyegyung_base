/*HW13 이름의 글자 수 출력하기 김성주*/
#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	char k[10] = {};
	char n[20] = {};
	int kn, nn;
	printf("#성을 입력하시오 : ");
	scanf("%s", k);
	printf("#이름을 입력하시오 : ");
	scanf("%s", n);
	kn = strlen(k);
	nn = strlen(n);
	printf("%s %s\n", k, n);
	printf("%*d %*d\n", kn, kn, nn, nn);
	return 0;
}