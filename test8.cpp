#include <stdio.h>
int main(void)
{
	//TODO
	int i, j;
	for (i = 5; i >= 1; i--) {
		for (j = i; j <= 5; j++) {
			printf("%d", j);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}