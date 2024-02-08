#include <stdio.h>

int main()
{
	int t[10][10] = {0};
	int i , j;
	for (i = 0; i < 10; i++)
	{
		t[i][0] = 1;
		t[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < i; j++)
		{
			t[i][j] = t[i - 1][j] + t[i - 1][j - 1];
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d ", t[i][j]);
		}
		printf("%d\n", t[i][i]);
	}
}
