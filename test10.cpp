/*call by pointer 기법  김성주*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
void input(int* ap, double* hp, char* gp);
int main(void)
{
	//TODO
	int age;
	double height;
	char gender;
	input(&age, &height, &gender);
	printf("age = %d, height = %.2lf, gender = %c\n", age, height, gender);
	return 0;
}

void input(int* ap, double* hp, char* gp) {
	scanf("%d %lf %c", ap, hp, gp); //of &*ap 가능 //&ap 불가능, 가리키는 곳이 달라짐
	return;
}