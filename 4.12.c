#include <stdio.h>

float distance(float x, float y, float x1, float y1)
{
	return (x - x1) * (x - x1) + (y - y1) * (y - y1);
}
int main()
{
	float x,y;
	printf("������һ����(x,y):");
	scanf("%f,%f",&x, &y);
	if (distance(x, y, 2.0, 2.0) <= 1.0)
	{
		printf("�õ�߶�Ϊ10");
	}
	else if (distance(x, y, 2.0, -2.0) <= 1.0)
	{
		printf("�õ�߶�Ϊ10");
	}
	else if (distance(x, y, -2.0, 2.0) <= 1.0)
	{
		printf("�õ�߶�Ϊ10");
	} 
	else if (distance(x, y, -2.0, -2.0) <= 1.0)
	{
		printf("�õ�߶�Ϊ10");
	}
	else
	{
		printf("�õ�߶�Ϊ0");
	}
}
