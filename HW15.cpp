/*HW15 BMI ���ϱ�  �輺��*/
double inputDouble(const char*);
double calcBmi(double w, double h);
void output(double);
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	double w, h, bmi;
	w = inputDouble("�����Ը� �Է��ϼ���(kg) : ");
	h = inputDouble("Ű�� �Է��ϼ���(m) : ");
	bmi = calcBmi(w, h);
	output(bmi);


	return 0;
}

double inputDouble(const char* msg) { //���ڿ� ����� �� �� ���ڿ��� ���� �ּ��̰� �����
	double num;
	while (1) {
		printf("%s", msg);
		scanf("%lf", &num);
		if (getchar() != '\n')
			while (getchar() != '\n');
		else break;
	}
	return num;
}

double calcBmi(double w, double h) {
	return w / (h * h);
}

void output(double bmi) {
	if (bmi < 18.5) printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", bmi);
	else if(bmi<25) printf("����� BMI�� %.1lf���� ����ü���Դϴ�.\n", bmi);
	else if(bmi<30) printf("����� BMI�� %.1lf���� ��ü���Դϴ�.\n", bmi);
	else if(bmi<40) printf("����� BMI�� %.1lf���� ���Դϴ�.\n", bmi);
	else printf("����� BMI�� %.1lf���� �����Դϴ�.\n", bmi);
}