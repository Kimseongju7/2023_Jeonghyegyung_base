/*HW7 ����Ÿ��� �ü��� �Է� �޾� ����ð��� ����ϱ� �輺��*/
#include <stdio.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	int i, hou, min;
	double km, f, sec, time;
	i = 0;
	while (i < 3) {
		printf("* �Ÿ��� �Է��Ͻÿ�(km����) : ");
		scanf("%lf", &km);
		printf("* �ü��� �Է��Ͻÿ�(km/h����) : ");
		scanf("%lf", &f);
		time = (km / f);
		hou = (int)time;
		min = (int)(time * 60 - hou * 60);
		sec = (time * 60 - hou * 60) * 60 - min * 60;
		printf("%.2lf km = > %d�ð� %d�� %.3lf �� �ҿ��\n\n", km, hou, min, sec);
		i++;
	}
	return 0;
}