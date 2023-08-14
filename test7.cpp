#include <stdio.h>
int main(void)
{
	//TODO
	int i, j;
	for (i = 5; i > 0; i--) {
		for (j = 1; j <=i; j++) {
			printf("%d", j);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}