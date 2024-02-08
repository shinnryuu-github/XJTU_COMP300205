#include <stdio.h>

void input(int num[]);
void manage(int num[]);
void output(int num[]);

int main()
{	
	int num[10];
	input(num);
	manage(num);
	output(num);
} 

void input(int num[])
{
	printf("input 10 numbers:");
	int i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d ", &num[i]);
	}
}

void manage(int num[])
{
	int min = num[0], max = num[0], index = 0, index2 = 0, i;
	for (i = 0; i < 10; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
			index = i;
		}
		if (num[i] > max)
		{
			max = num[i];
			index2 = i;
		}
	}
	num[index] = num[0];
	num[0] = min;
	num[index2] = num[9];
	num[9] = max;
}

void output(int num[])
{
	printf("Now,they are:");
	int i;
	for (i = 0; i < 9; i++)
	{
		printf("%d ", num[i]);
	}
	printf("%d",num[9]);
}
