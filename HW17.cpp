/*HW17 ����, Ű, ������ �Է� �޾� ���� ���� ���� ����Ǵ� ���α׷��� �ۼ��Ͻÿ�.  �輺��*/
#include <stdio.h>
#include <string.h>
#pragma warning (disable : 4996) //scnaf ��� �� ���� ����
int main(void)
{
	//TODO
	char name[20] = {};
	double h;
	char s;
	int n;
	printf("# ���� �Է� : ");
	fgets(name, sizeof(name), stdin);
	n = strlen(name);
	name[n - 1] = '\0';
	printf("# Ű �Է�(cm����) : ");
	scanf("%lf", &h);
	printf("# �����Է�(M/F) : ");
	scanf(" %c", &s);
	if (s == 'M')
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, h);
	else printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.\n", name, h);
	return 0;
}