/*HW15 BMI 구하기  김성주*/
double inputDouble(const char*);
double calcBmi(double w, double h);
void output(double);
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf 사용 시 오류 예방
int main(void)
{
	//TODO
	double w, h, bmi;
	w = inputDouble("몸무게를 입력하세요(kg) : ");
	h = inputDouble("키를 입력하세요(m) : ");
	bmi = calcBmi(w, h);
	output(bmi);


	return 0;
}

double inputDouble(const char* msg) { //문자열 상수는 곧 그 문자열의 시작 주소이고 상수임
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
	if (bmi < 18.5) printf("당신은 BMI는 %.1lf으로 저체중입니다.\n", bmi);
	else if(bmi<25) printf("당신은 BMI는 %.1lf으로 정상체중입니다.\n", bmi);
	else if(bmi<30) printf("당신은 BMI는 %.1lf으로 과체중입니다.\n", bmi);
	else if(bmi<40) printf("당신은 BMI는 %.1lf으로 비만입니다.\n", bmi);
	else printf("당신은 BMI는 %.1lf으로 고도비만입니다.\n", bmi);
}