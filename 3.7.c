#include <stdio.h>

int main()
{
	double r, h;
	double pi = 3.14159;
	printf("������Բ�뾶r��Բ����h��\n");
	scanf("%lf,%lf", &r, &h); 
	printf("Բ�ܳ�Ϊ:%.2lf\n", 2 * pi * r);
	printf("Բ���Ϊ:%.2lf\n", pi * r * r);
	printf("Բ������Ϊ:%.2lf\n", 4 * pi * r * r);
	printf("Բ�����Ϊ:%.2lf\n", 4 / 3.0 * pi * r * r * r);
	printf("Բ�����Ϊ:%.2lf\n", pi * r * r * h);
}
