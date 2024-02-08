#include <stdio.h>

int main()
{
	int i;
	for (i = 1; i < 1000; i++)
	{
		int factor[i];
		int j, count = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				factor[count] = j;
				count++;
			}
		}
		int k, sum = 0;
		for (k = 0; k < count; k++)
		{
			sum += factor[k];
		}
		if (sum == i)
		{
			printf("%d,Its factors are ",i);
			for (k = 0; k < count - 1; k++)
			{
				printf("%d,",factor[k]);
			}
			printf("%d\n",factor[count - 1]);
		}
	}
}
