#include <stdio.h>
int main(void)
{
	//TODO
	int money = 278970;
	int n50000, n10000, n5000, n1000, n500, n100, n50, n10;
	n50000 = money/50000;
	money -= n50000 * 50000;
	n10000 = money/10000;
	money -= n10000 * 10000;
	n5000 = money/5000;
	money -= n5000 * 5000;
	n1000 = money/1000;
	money -= n1000 * 1000;
	n500 = money/500;
	money -= n500 * 500;
	n100 = money/100;
	money -= n100 * 100;
	n50 = money/50;
	money -= n50 * 50;
	n10 = money/10;
	printf("50000���� => %d��\n", n50000);
	printf("10000���� => %d��\n", n10000);
	printf("5000���� => %d��\n", n5000);
	printf("1000���� => %d��\n", n1000);
	printf("500���� => %d��\n", n500);
	printf("100���� => %d��\n", n100);
	printf("50���� => %d��\n", n50);
	printf("10���� => %d��\n", n10);
	return 0;
}