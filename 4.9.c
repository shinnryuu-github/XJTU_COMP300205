#include <stdio.h>

int main()
{
	int intig;
	printf("������һ������(0-99999):");
	scanf("%d",&intig);
	int copy = intig;
	int num = 0;
	while (intig > 0)
	{
		intig = intig / 10;
		num++;
	}
	printf("λ��:%d\n",num);
	int digits[num];
	int i = 0;
	for (i; i < num; i++)
	{
		digits[i] = copy % 10;
		copy = copy / 10;
	}
	printf("ÿλ����Ϊ:");
	i = 0;
	for  (i; i < num - 1; i++)
	{
		printf("%d,",digits[num - 1 - i]);
	}
	printf("%d",digits[0]);
	printf("\n");
	i = 0;
	printf("��������Ϊ:");
	for (i; i < num; i++)
	{
		printf("%d",digits[i]);
	}
}
