#include <stdio.h>
/*int main(void)
{
	//TODO
	int i, j, sum = 0;
	for (i = 10; i <= 100; i+=10) {
		for (j = i-9; j <= i; j++) {
			sum += j;
		}
		printf("1~%d = %d\n", i, sum);
	}
	return 0;
}
*/


int main(void) {
	int i, sum = 0;
	for (i = 1; i < 101; i++) {
		sum += i;
		if (i % 10 == 0) printf("1~%d = %d\n", i, sum);
	}
	return 0;
}

