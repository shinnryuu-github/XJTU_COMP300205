#include <stdio.h>

float distance(float x, float y, float x1, float y1)
{
	return (x - x1) * (x - x1) + (y - y1) * (y - y1);
}
int main()
{
	float x,y;
	printf("请输入一个点(x,y):");
	scanf("%f,%f",&x, &y);
	if (distance(x, y, 2.0, 2.0) <= 1.0)
	{
		printf("该点高度为10");
	}
	else if (distance(x, y, 2.0, -2.0) <= 1.0)
	{
		printf("该点高度为10");
	}
	else if (distance(x, y, -2.0, 2.0) <= 1.0)
	{
		printf("该点高度为10");
	} 
	else if (distance(x, y, -2.0, -2.0) <= 1.0)
	{
		printf("该点高度为10");
	}
	else
	{
		printf("该点高度为0");
	}
}
