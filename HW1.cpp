/*���� 141������*/
#include<stdio.h>
void printAge(int);
void printHeight(double);
// TODO // printHeight() �Լ��� �����
int main()
{
	char name[20] = "�輺��";
	int age = 20;
	double height = 165.1;
	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);
	return 0;
}
// printAge() �Լ��� ���Ǻ�
void printAge(int age) {
	printf("���� : %d��\n", age);
	return;
}
//printHeight() �Լ��� ���Ǻ�
void printHeight(double height) {
	printf("���� : %.1lfcm", height);
	return;
}