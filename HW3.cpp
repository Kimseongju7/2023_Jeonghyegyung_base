#include <stdio.h>
int main(void)
{
	//TODO
	int time = 54321;
	int ttime = time;
	int hou, min, sec;
	hou = time / 3600;
	time -= hou * 3600;
	min = time / 60;
	time -= min * 60;
	sec = time;
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.\n", ttime, hou, min, sec);


	return 0;
}