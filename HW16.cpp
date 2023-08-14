/*HW16 ����ö ��� ����ϱ� �輺��*/
int inputInt(const char* msg);
int calcAmount(int);
void output(int);
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int i, n, m;
	for (i = 0; i < 5; i++) {
		n = inputInt("������ �Է��Ͻÿ� : ");
		m = calcAmount(n);
		output(m);
	}

	return 0;
}

int inputInt(const char* msg) { //���ڿ� ����� �� �� ���ڿ��� ���� �ּ��̰� �����
	int num;
	while (1)
	{
		printf("%s", msg);
		scanf("%d", &num);
		if (getchar() != '\n')
			while (getchar() != '\n');
		else {
			if(num!=0) break;
		}
	}
	return num;
}

int calcAmount(int n) {
	int i, m, nn = n-10;
	if (n <= 5) m = 600;
	else if (n <= 10) m = 800;
	else {
		m = 800;
		if (nn <= 2) m += 100;
		else if (nn <= 4) m += 200;
		else { //5�̻�
			for (i = 0; i < nn / 4; i++) m += 200;
			switch (nn % 4) {
			case 1:
			case 2:
				m += 100;
				break;
			case 3: 
				m += 200;
				break;
			default : ;
			}
		}
	}

	return m;
}

void output(int m) {
	printf("��� : %d��\n", m);
	return;
}