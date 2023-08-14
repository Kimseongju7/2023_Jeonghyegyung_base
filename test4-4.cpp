/*플래그 예제*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	int x = 10, y = 010, z = 0x10; //예상 값 //오답 시 실제값
	printf("10은 %#o(8) 와 같고 %#x(16)와 같다\n", x, x); //10은 012(8) 와 같고 0xa(16)와 같다
	printf("010(8)은 %d와 같고 %#x(16)와 같다\n", y, y); //010(8)은 8와 같고 0x8(16)와 같다
	printf("0x10는 %#o(8) 와 같고 %d와 같다\n", z, z); //0x10은 020(8) 와 같고 16와 같다
	return 0;
}