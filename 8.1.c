#include <stdio.h>

void sort(int num[]);

int main()
{
	int num[3];
	printf("input three integer n1,n2,n3:");
	scanf("%d,%d,%d", &num[0], &num[1], &num[2]);
	sort(num);
	printf("\nNow,the order is:%d,%d,%d", num[0], num[1], num[2]);
}

void sort(int num[])
{
	int i, j;
	for (i = 2; i >= 0; i--)
	{
		int max = num[0], index = 0;
		for (j = 0; j <= i; j++)
		{
			if (num[j] > max)
			{
				max = num[j];
				index = j;
			}
		}
		num[index] = num[i];
		num[i] = max;
	}	
} 
