#include <stdio.h>

int main()
{
	double r, h;
	double pi = 3.1415926;
	printf("������Բ�뾶r��Բ����h��")��
	scanf("%d %d", &r, &h); 
	printf("Բ�ܳ�Ϊ:%.2lf\n", 2 * pi * r);
	printf("Բ���Ϊ:%.2lf\n", pi * r * r);
	printf("Բ������Ϊ:%.2lf\n", 4 * pi * r * r);
	printf("Բ�����Ϊ:%.2lf\n", 4 / 3.0 * pi * r * r * r);
	printf("Բ�����Ϊ:%.2lf\n", pi * r * r * h);
}
