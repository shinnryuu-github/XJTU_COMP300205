#include <stdio.h>

int main()
{
	int intig;
	printf("请输入一个整数(0-99999):");
	scanf("%d",&intig);
	int copy = intig;
	int num = 0;
	while (intig > 0)
	{
		intig = intig / 10;
		num++;
	}
	printf("位数:%d\n",num);
	int digits[num];
	int i = 0;
	for (i; i < num; i++)
	{
		digits[i] = copy % 10;
		copy = copy / 10;
	}
	printf("每位数字为:");
	i = 0;
	for  (i; i < num - 1; i++)
	{
		printf("%d,",digits[num - 1 - i]);
	}
	printf("%d",digits[0]);
	printf("\n");
	i = 0;
	printf("反序数字为:");
	for (i; i < num; i++)
	{
		printf("%d",digits[i]);
	}
}
