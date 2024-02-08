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
	printf("第10次落地时共经过%.6lf米\n",d);
	printf("第10次反弹%.6lf米", height[10]);
}
