#include <stdio.h>

int main()
{
	int h = 100, i;
	double height[11];
	double d = 100.0;
	height[0] = 100;
	for (i = 1; i <= 10; i++)
	{
		height[i] = height[i - 1] / 2.0;
	}
	for (i = 1; i <10; i++)
	{
		d += 2*height[i];
	}
	printf("��10�����ʱ������%.6lf��\n",d);
	printf("��10�η���%.6lf��", height[10]);
}
