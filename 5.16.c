#include <stdio.h>

int main()
{
	int i;
	for (i = 3; i >= 0; i--)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 7 - 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= 2; i++)
	{
		int j;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 7 - 2 * i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("   *");
}
