#include <stdio.h>
int main(void)
{
	//TODO
	int i, j;
	for (i = 1; i <= 5; i++) {
		for (j = 0; j < i; j++) {
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}