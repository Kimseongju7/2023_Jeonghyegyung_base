/*call by pointer ���  �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
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
	scanf("%d %lf %c", ap, hp, gp); //of &*ap ���� //&ap �Ұ���, ����Ű�� ���� �޶���
	return;
}