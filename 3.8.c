#include <stdio.h>

int main()
{
	double r, h;
	double pi = 3.1415926;
	printf("请输入圆半径r，圆柱高h：")；
	scanf("%d %d", &r, &h); 
	printf("圆周长为:%.2lf\n", 2 * pi * r);
	printf("圆面积为:%.2lf\n", pi * r * r);
	printf("圆球表面积为:%.2lf\n", 4 * pi * r * r);
	printf("圆球体积为:%.2lf\n", 4 / 3.0 * pi * r * r * r);
	printf("圆柱体积为:%.2lf\n", pi * r * r * h);
}
