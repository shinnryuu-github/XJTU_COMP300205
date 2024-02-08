#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d,%d,%d,%d",&a, &b, &c, &d);
	int nums[] = {a, b,  c, d};
	int i = 0;
	int j = 0;
	int temp;
	for(i; i < 3; i++)
	{
		for(j; j < 4 - i - 1; j++)
		{
			if (nums[j] > nums[j + 1])
			{
				temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;
			}
		}
	}
	i = 0;
	for(i; i < 3; i++)
	{
		printf("%d,",nums[i]);
	}
	printf("%d",nums[3]);
}
