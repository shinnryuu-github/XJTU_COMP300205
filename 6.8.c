#include <stdio.h>

int an(int i, int j, int lst[][3]);

int main()
{
	int lst[3][3];
	scanf("%d %d %d %d %d %d %d %d %d",&lst[0][0],&lst[0][1],&lst[0][2],&lst[1][0],&lst[1][1],&lst[1][2],&lst[2][0],&lst[2][1],&lst[2][2]);
	int i, j, is_exist = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (an(i, j, lst))
			{
				printf("%d,%d,%d", i, j, lst[i][j]);
				is_exist = 1;
			}
		}
	}
	if (! is_exist)
	{
		printf("not exist");
	}
}

int an(int i, int j, int lst[][3])
{
	int a, b, row = 1, column = 1;
	for (a = 0; a < 3; a++)
	{
		if (lst[i][a] > lst[i][j])
		{
			row = 0;
			break;
		}
	}
	for (b = 0; b < 3; b++)
	{
		if (lst[b][j] < lst[i][j])
		{
			column = 0;
			break;
		}
	}
	return row && column;
}
