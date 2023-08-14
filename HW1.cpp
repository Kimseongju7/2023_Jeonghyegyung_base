/*교재 141페이지*/
#include<stdio.h>
void printAge(int);
void printHeight(double);
// TODO // printHeight() 함수의 선언부
int main()
{
	char name[20] = "김성주";
	int age = 20;
	double height = 165.1;
	printf("성명 : %s\n", name);
	printAge(age);
	printHeight(height);
	return 0;
}
// printAge() 함수의 정의부
void printAge(int age) {
	printf("나이 : %d세\n", age);
	return;
}
//printHeight() 함수의 정의부
void printHeight(double height) {
	printf("신장 : %.1lfcm", height);
	return;
}